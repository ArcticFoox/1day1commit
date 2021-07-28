#include<iostream>
#define MAX 110
using namespace std;

int n, w;
int Weight[MAX];
int Value[MAX];
int DP[MAX][100010];

int Max(int A, int B) { if (A > B) return A; return B; }

void Solution()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if (j >= Weight[i]) 
                DP[i][j] = Max(DP[i - 1][j], DP[i - 1][j - Weight[i]] + Value[i]);
            else 
                DP[i][j] = DP[i - 1][j];
        }
    }
    cout << DP[n][w] << '\n';
}
//출처: https://yabmoons.tistory.com/571 [얍문's Coding World..]

int main(){
    
    scanf("%d %d", &n, &w);

    for(int i = 0; i < n; i++){
        scanf("%d %d", &Weight[i], &Value[i]);
    }

    Solution();

    return 0;
}