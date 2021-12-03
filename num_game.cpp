#include<iostream>
using namespace std;

int main(){
    int n;
    int arr[1001][5];
    int max[1001] = { 0, };
    int max_index = 0;
    int m_max = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
        }
    }
    for(int t = 0; t < n; t++){
        for(int i = 0; i < 5; i++){
            for(int j = i + 1; j < 5; j++){
                for(int k = j + 1; k < 5; k++){
                    if((arr[t][i] + arr[t][j] + arr[t][k]) % 10 > max[t]){
                        max[t] = (arr[t][i] + arr[t][j] + arr[t][k]) % 10;
                    }
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(max[i] >= m_max){
            m_max = max[i];
            max_index = i + 1;
        }

    }
    cout << max_index;
    return 0;
}