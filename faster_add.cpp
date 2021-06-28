#include<iostream>

using namespace std;


int T;
int A, B;
int sum;

int main(){
    scanf("%d", &T);

    for(int i = 0 ; i < T; i++){
        scanf("%d", &A);
        scanf("%d", &B);
        sum = A + B;
        printf("%d\n", sum);
        sum = 0;
    }


    return 0;
}