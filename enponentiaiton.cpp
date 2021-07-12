#include<iostream>

using namespace std;

int main(){
    int n, m;
    int i = 1;
    int sum = 0;
    int min = 0;

    scanf("%d %d", &n, &m);

    while(true){
        int t = 0;
        t = i * i;
        if(t >= n && t <= m){
            sum += t;
            if(min == 0){
                min = t;
            }
            
            if(t < min)
                min = t;
        }

        if(t > m){
            break;
        }

        i++;
    }

    printf("%d %d", sum, min);

    return 0;
}