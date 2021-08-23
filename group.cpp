#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int N;
int arr[25][25];

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int cnt = 0;
vector<int> v;

void DFS(int x, int y){
    for(int i = 0; i < 4; i++){
        int next_x = x + dx[i];
        int next_y = y + dy[i];

        if(next_x < 0 || next_x >= N || next_y < 0 || next_y >= N) continue;
        if(arr[next_x][next_y] == 1){
            cnt++;
            arr[next_x][next_y] == 2;
            DFS(next_x, next_y);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%1d", &arr[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] == 1) {
				cnt = 1;
				arr[i][j] = 2;
				DFS(i, j);
				v.push_back(cnt);
			}
			
		}
	}

	cout << v.size() << endl;
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) cout << v[i] << endl;

    return 0;
}

//https://sanghyu.tistory.com/53