#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int n, m;
int dx[4] ={0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int arr[50][50];
int visit[50][50];
int cnt = 0;

void bfs(int x, int y){
    queue<pair<int, int>> q;
    q.push(make_pair(n, m));

    while(!q.empty()){

        x = q.front().first;
        y = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++){
            int next_x = x + dx[i];
            int next_y = y + dy[i];

            if(next_x < 0 || next_x >= n || next_y < 0 || next_y >= m) continue;
            if(arr[next_x][next_y] && !visit[next_x][next_y]){
                cnt++;
                visit[next_x][next_y] = true;
                q.push(make_pair(next_x, next_y));
            }
        }
    }
}

void dfs(int x, int y){
    for(int i = 0; i < 4; i++){
        int next_x = x + dx[i];
        int next_y = y + dy[i];

        if(next_x < 0 || next_x >= n || next_y < 0 || next_y >= m) continue;
        if(arr[next_x][next_y] == 1){
            cnt++;
            visit[next_x][next_y] = true;
            dfs(next_x, next_y);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    vector<int> v;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%1d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 1) {
				cnt = 1;
				visit[i][j] = true;
				dfs(i, j);
				v.push_back(cnt);
			}
			
		}
	}

    cout << v.size() << '\n';

    return 0;
}