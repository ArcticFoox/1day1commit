#include<iostream>
#include<vector>
using namespace std;

int arr[101] = { 0, };
bool visited[101];
bool cycle[101];
int cnt = 0;
int n, m;

bool DFS(int start, int arrnum){
    if(visited[arrnum]){
        return false;
    }
    visited[arrnum] = true;

    if(start == arrnum || DFS(start, arr[arrnum])){
        cnt++;
        cycle[arrnum] = true;
        return true;
    }
    return false;
}

int main(){
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            visited[j] = cycle[j];
        }
        DFS(i, arr[i]);
    }

    cout << cnt << "\n";
    for(int i = 1; i <= n; i++){
        if(cycle[i]){
            cout << i << " ";
        }
    }
    cout << "\n";
    return 0;
}