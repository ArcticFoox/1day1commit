#include<iostream>

using namespace std;

int main(){
    int n, x;
    int arr[100001];

    scanf("%d %d", &n, &x); 
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        if(arr[i] < x){
            printf("%d  ", arr[i]);
        }
    }
    return 0;
}