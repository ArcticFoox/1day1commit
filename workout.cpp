#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    const int INF = 1000000;
    int node, edge, start, end, val;
    long long arr[401][401];

    cin >> node >> edge;

    for(int i = 1; i <= node; i++){
        for(int j = 1; j <= node; j++){
            if(i == j)
                arr[i][j] = 0;
            else
                arr[i][j] = INF;
        }
    }

    for(int i = 0; i < edge; i++){
        cin >> start >> end >> val;
        arr[start][end] = val;
    }

    for(int k = 1; k <= node; k++){
        for(int i = 1; i <= node; i++){
            for(int j = 1; j <= node; j++){
                arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
            }
        }
    }

    long long result = INF;
    for(int i = 1; i <= node; i++){
        for(int j = 1; j <= node; j++){
            if(i == j)
                continue;
            result = min(result, arr[i][j] + arr[j][i]);
        }
    }

    if(result == INF)
        result = -1;
    cout << result;
    return 0;
}