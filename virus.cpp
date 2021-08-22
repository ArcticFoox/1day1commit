#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int number;
int visit[100];
vector<int> a[100];
int cnt = 0;

void BFS(int start){
    queue<int> q;
    q.push(start);
    visit[start] = true;

    while(!q.empty()){
        int x = q.front();
        q.pop();
        cnt++;
        for(int i = 0; i < a[x].size(); i++){
            int y = a[x][i];
            if(!visit[y]){
                q.push(y);
                visit[y] = true;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;

    cin >> number >> n;

    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    BFS(1);

    cout << cnt << '\n';
    return 0;
}

//https://hongku.tistory.com/156
//https://guiyum.tistory.com/40