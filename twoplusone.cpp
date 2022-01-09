#include<iostream>
using namespace std;

int main(){
    int arr[101];
    int number[201] = { 0, };

    int n, sum;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            sum = arr[i] + arr[j];
            if(number[sum] == 0){
                number[sum] = 1;
            }
        }
    }

    for(int i = 0; i < 201; i++){
        if(number[i] == 1)
            cout << i << " ";
    }
    return 0;
}