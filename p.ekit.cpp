#include<iostream>
using namespace std;

int main(){
    int arr[30];
    int lost[30];
    int reverse[30];
    int n, m, k;
    int result = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        arr[i] = 1;
    }

    cin >> m;

    for(int i = 0; i < m; i++){
        cin >> lost[i];
    }

    for(int i = 0; i < m; i++){
        arr[lost[i] - 1] -= 1;
    }

    cin >> k;

    for(int i = 0; i < k; i++){
        cin >> reverse[i];
    }

    for(int i = 0; i < k; i++){
        arr[reverse[i] - 1] += 1;
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    for(int i = 0; i < n; i++){
        if(i == 0 || i == n - 1){
            if(arr[i] >= 1){
                result++;
            }
        }
        else{
            if(arr[i] == 0){
                if(arr[i - 1] == 2){
                    arr[i - 1] -= 1;
                    result++;
                }
                else if(arr[i + 1] == 2){
                    arr[i + 1] -= 1;
                    result++;
                }
                else{
                    continue;
                }
            }
            else{
                result++;
            }
        }
    }

    cout << result;
}