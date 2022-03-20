#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[1001] = {0, };
    int n, tmp;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(arr[i] < arr[j]){
                tmp = arr[i];
                for(int k = i; k >= j; k--){
                    arr[k] = arr[k - 1];
                }
                arr[j] = tmp;
                break;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << "\n";
    }

    return 0;
}