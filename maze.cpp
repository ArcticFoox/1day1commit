#include<iostream>
#include<queue>

using namespace std;

int n, m;
bool check[100][100]; // 방문 여부
int a[100][100];
int length[100][100];  // 이동 거리
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

void BFS(int x, int y){
    queue<pair<int, int>> q;
    q.push(make_pair(y, x));
    length[y][x] = 1;
    check[y][x] =true;

    while (!q.empty()){
        int x = q.front().second;
        int y = q.front().first;
        q.pop();

        for(int i = 0; i < 4; i++){
            int next_x = x + dx[i];
            int next_y = y + dy[i];

            if(next_x >= 0 && next_y >= 0 && next_x < m && next_y < n 
                && a[next_y][next_x] == 1 && check[next_y][next_x] == false){
                
                length[next_y][next_x] = length[y][x] + 1;
                check[next_y][next_x] = true;
                q.push(make_pair(next_y, next_x));
            }
        }
    }
    
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%1d", &a[i][j]);
        }
    }
    BFS(0, 0);
    cout << length[n-1][m-1] << '\n';

    return 0;
}

// https://phil-baek.tistory.com/16