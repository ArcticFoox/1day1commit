#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

typedef struct{
    int y, x;
}Dir;

Dir moveDir[4] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

int n, m;
int lab[8][8];
int temp[8][8];
int result;

void bfs(){
    int afterSpread[8][8];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            afterSpread[i][j] = temp[i][j];
        }
    }

    queue<pair<int, int>> q;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(afterSpread[i][j] == 2)
                q.push(make_pair(i, j));
        }
    }

    while(!q.empty()){
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++){
            int nextY = y + moveDir[i].y;
            int nextX = x + moveDir[i].x;

            if(0 <= nextY && nextY < n && 0 <= nextX && nextX < m){

                if (afterSpread[nextY][nextX] == 0){
                    afterSpread[nextY][nextX] = 2; 
                    q.push(make_pair(nextY, nextX));
                }
            }
        }
    }

    int empty = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(afterSpread[i][j] == 0)
                empty++;
        }
    }
    if(result < empty)
        result = empty;
}

void makeWall(int cnt){
    if(cnt == 3){
        bfs();
        return;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(temp[i][j] == 0){
                temp[i][j] = 1;
                makeWall(cnt + 1);
                temp[i][j] = 0;
            }
                
        }
    }
}

int main(){

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> lab[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(lab[i][j] == 0){
                for(int k = 0; k < n; k++){
                    for(int l = 0; l < m; l++){
                        temp[k][l] = lab[k][l];
                    }
                }
                temp[i][j] = 1;
                makeWall(1);
                temp[i][j] = 0;
            }
                
        }
    }

    cout << result << '\n';
    return 0;
}
//https://jaimemin.tistory.com/601