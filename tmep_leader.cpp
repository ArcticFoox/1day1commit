#include<iostream>
using namespace std;

int main(){
    int arr[1001][6];
    bool check[1001][1001];

    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < n - 1; j++){
            for(int k = j + i; k < n; k++){
                if(arr[i][j] == arr[k][j]){
                    check[j][k] = check[k][j] = true;
                }
            }
        }
    }

    int answer = -1;
    int prev_count = -1;
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(check[i][j]) count++;
        }
        if(count > prev_count){
            answer = i + 1;
            prev_count = count;
        }
    }

    cout << answer << "\n";
    return 0;
}