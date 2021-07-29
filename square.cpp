#include<iostream>

using namespace std;

int main(){
    int n;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        int fir, sec;

        scanf("%d %d", &fir, &sec);

        printf("Case %d: %d\n", i, fir + sec);
    }

    return 0;
}