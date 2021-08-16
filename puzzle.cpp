#include<iostream>
#include<string>
#include<algorithm>
#include<queue>
#include<map>

using namespace std;

const int Target = 123456789;

typedef struct{
    int y, x;
}Dir;

Dir moveDir[4] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1}};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int start = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
        int num;
        cin >> num;

        if(num == 0)
            num = 9;
        start = start * 10 + num;
        }
    }

    queue<int> q;
    map<int, int> visited;
    q.push(start);
    visited[start] = 0;

    while (!q.empty()){
        int cur = q.front();
        string s = to_string(cur);
        q.pop();

        if(cur == Target)
            break;
        
        int z = s.find('9');
        int y = z / 3;
        int x = z % 3;

        for(int i = 0; i < 4; i++){
            int nextY = y + moveDir[i].y;
            int nextX = x + moveDir[i].x;

            if(0 <= nextY && nextY < 3 && 0 <= nextX && nextX < 3){
                string temp = s;
                swap(temp[y * 3 + x], temp[nextY * 3 + nextX]);

                int next = stoi(temp);
                if(!visited.count(next)){
                    visited[next] = visited[cur] + 1;
                    q.push(next);
                }
            }
        }
    }

    if(!visited.count(Target))
        cout << -1 << "\n";
    else
        cout << visited[Target] << "\n";

    return 0;
    
}

//https://www.acmicpc.net/problem/1525
//https://gmlwjd9405.github.io/2018/08/15/algorithm-bfs.html