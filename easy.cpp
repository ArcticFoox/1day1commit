#include<iostream>

using namespace std;

int main(){
    int ary[10001];
    int count = 0;
    int n, m;
    int sum = 0;

    scanf("%d %d", &n, &m);

    for(int i = 1; i < 100; i++){
        for(int j = 1; j <= i; j++){
            count++;
            if (count >= n && count <= m) { 
                sum += i;
            }
            if (count == m) break;
        }
        if (count == m) break;
    }

    printf("%d", sum);
    
    return 0;
}