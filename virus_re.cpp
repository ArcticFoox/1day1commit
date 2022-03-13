#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int n, m;
int visited[1001];
vector<int> arr[1001];
int cnt = 0;

void bfs(int start){
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty()){
        int x = q.front();
        q.pop();
        for(int i = 0; i < arr[x].size(); i++){
            int y = arr[x][i];
            if(!visited[y]){
                q.push(y);
                visited[y] = true;
                cnt++;
            }
        }
    }
}

int main(){
    int first, end;
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        cin >> first >> end;
        arr[first].push_back(end);
        arr[end].push_back(first);
    }

    bfs(1);

    cout << cnt;

    return 0;
}