#include<iostream>

using namespace std;

int main(){
    int i, n;
    scanf("%d", &n);
    int d[100001] = {0, };

    d[0] = 0;
    d[1] = 1;
    d[2] = 2;

    for(i = 3; i <= n; i++){
        d[i] = d[i-2] + d[i-1];
        d[i] %= 15746;
    }
    printf("%d", d[n]);
    return 0;
}