#include<iostream>

using namespace std;

int main(){
    int all;
    int limit;
    int seq[100001];

    scanf("%d %d", &all, &limit);

    for(int i = 0; i < all; i++){
        cin >> seq[i];
    }

    for(int i = 0; i < all; i++){
        if(seq[i] < limit)
            printf("%d ", seq[i]);
    }

    return 0;
}