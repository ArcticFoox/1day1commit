#include<iostream>

using namespace std;

int main(){

    int arr[100000] = {0,};
    int sum = 0;
    int a;

    cin >> a;

    for(int i = 0; i < a ; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    cout << sum;


    return 0;
}