#include<iostream>

using namespace std;

int main(){
    int sum;

    scanf("%d", &sum);

    for(int i = 0; i < 9; i++){
        int book = 0;
        scanf("%d", &book);
        sum -= book;
    }

    printf("%d", sum);
}