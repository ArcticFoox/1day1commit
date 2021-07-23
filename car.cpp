#include<iostream>

using namespace std;

int main(){
    int n, m;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int sum = 0;
        scanf("%d", &sum);
        scanf("%d", &m);

        for(int i = 0; i < m; i++){
            int t, r;
            scanf("%d %d", &t, &r);
            sum += (t * r);

        }
        printf("%d\n", sum);
    }
    return 0;
}