#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

void dfs(int start, vector<int>graph[], bool check[]){
    stack<int> s;
    s.push(start);
    check[start] = true;
    printf("%d", start);

    while(!s.empty()){
        int current_node = s.top();
        s.pop();
        for(int i = 0; i < graph[current_node].size(); i++){
            int next_node = graph[current_node][i];

            if(check[next_node]==false){
                printf("%d", next_node);
                check[next_node] = true;
                s.push(current_node);
                s.push(next_node);
                break;
            }
        }
    }
}

void bfs(int start, vector<int>graph[], bool check[]){
    queue<int> q;
    q.push(start);
	check[start] = true;

    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        printf("%d", tmp);
        for(int i = 0; i < graph[tmp].size(); i++){
            if(check[graph[tmp][i]]==false){
                q.push(graph[tmp][i]);
                check[graph[tmp][i]]=true;
            }
        }
    }
}

int main(){
    int vertices, line, start;

    scanf("%d %d %d", &vertices, &line, &start);

    vector<int>* graph = new vector<int>[vertices+1];
    bool* check = new bool[vertices+1];
    fill(check, check+vertices+1, false);

    for(int i = 0; i < line; i++){
        int u, v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i = 1; i <= vertices; i++){
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(start, graph, check);
    printf("\n");
    fill(check, check+vertices+1, false);
    bfs(start, graph, check);

    return 0;
}