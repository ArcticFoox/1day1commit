#include<iostream>
using namespace std;

int main(){
    int arr[20000][6];
    int n;
    int answer[4];
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 1; i < 5; i++){
        int max = 0;
        int index = 0;
        for(int j = 0; j < n; j++){
            if(arr[j][5] == 1){
                continue;
            }

            if(arr[j][i] > max){
                max = arr[j][i];
                index = j;
            }
        }
        answer[i - 1] = arr[index][0];
        arr[index][5] = 1;
    }

    for(int i = 0; i < 4; i++){
        cout << answer[i] <<" ";
    }
    return 0;
}