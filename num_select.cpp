#include<iostream>
#include<string.h>
using namespace std;

int N;
int cnt;

int node[101];
int visited[101];
int cycle[101];

bool DFS(int startNum, int nodeNum){
    if (visited[nodeNum])
        return false;

    visited[nodeNum] = true;

    if (startNum == nodeNum || DFS(startNum, node[nodeNum])){
        cnt++;
        cycle[nodeNum] = true;
        return true;
    }
    return false;
}

int main(){
    cin >> N;

    for (int i = 1; i <= N; i++)
        cin >> node[i];

    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= N; j++)
            visited[j] = cycle[j]; 

        DFS(i, node[i]);
    }

    cout << cnt << endl;

    for (int i = 1; i <= N; i++)
        if (cycle[i]) 
            cout << i << " ";

    cout << endl;

    return 0;
}
//https://www.acmicpc.net/problem/2668