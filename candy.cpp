#include<iostream>

using namespace std;

int main(){
    int n;

    scanf("%d", &n);

    while(n){
        int c, v;

        scanf("%d %d", &c, &v);

        printf("You get %d piece(s) and your dad gets %d piece(s).\n", c / v, c % v);
        
        n--;
    }

    return 0;
}