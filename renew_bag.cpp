#include<iostream>
using namespace std;

int n, m;
int weight[110];
int value[110];
int dp[110][100010];

void DP(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(j >= weight[i]){
                dp[i][j] = (dp[i -1][j] > dp[i - 1][j - weight[i]] + value[i] ?
                    dp[i -1][j] : dp[i - 1][j - weight[i]] + value[i]);
            }
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[n][m] << "\n";
}

int main(){
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        scanf("%d %d", &weight[i], &value[i]);
    }
    DP();

    return 0;
}