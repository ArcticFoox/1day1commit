#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    int sum = 0;
    int arr[1000];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            sum += arr[j];
        }
    }

    cout << sum << '\n';

    return 0;
}