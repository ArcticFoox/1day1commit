#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

vector<int> graph[51];
int score[51];
int n;

void bfs(int start){
    bool visited[51] = { 0, };
    int depth[51] = { 0, };

    queue<int> q;
    q.push(start);

    visited[start] = true;
    depth[start] = 0;

    while (!q.empty()){
		int x = q.front();
		q.pop();
		for (int i = 0; i < graph[x].size(); i++){
			int y = graph[x][i];
			if (!visited[y]) {
				q.push(y);
				visited[y] = true;
				depth[y] = depth[x] + 1;
			}
		}
	}

    int maxDepth = depth[1];
	for (int i = 2; i <= n; i++){
		maxDepth = max(maxDepth, depth[i]);
	}
	score[start] = maxDepth;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n;
    int a, b;
    while(true){
        cin >> a >> b;
        if(a == -1 && b == -1) break;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i = 1; i <= n; i++){
        bfs(i);
    }

    int maxScore = score[1];
	for (int i = 2; i <= n; i++){
		maxScore = min(maxScore, score[i]);
	}

	int count = 0;
	for (int i = 1; i <= n; i++){
		if (score[i] == maxScore) count++;
	}
	cout << maxScore << " " << count << "\n";

	for (int i = 1; i <= n; i++) {
		if (score[i] == maxScore) cout<<i<<" ";
	}

    return 0;
}
//https://ansohxxn.github.io/algorithm/floyd/
//https://velog.io/@e7838752/boj2660