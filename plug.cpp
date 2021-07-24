#include<iostream>

using namespace std;

int main(){
    int n;
    int sum = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int m;
        scanf("%d", &m);
        if(sum == 0)
            sum = m;
        else
            sum += m - 1;
    }

    printf("%d", sum);

    return 0;
}