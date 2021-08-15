#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n;
    int count = 1, index = 0, max = 0;

    cin >> n;

    string arr[1000];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for(int i = 0; i < n - 1; i++){
        if(arr[i] == arr[i + 1]){
            count++;

            if(count > max){
                max = count;
                index = i;
            }
            else
                continue;
        }

        else
            count = 1;
    }

    cout << arr[index] << '\n';
    
    return 0;
}

// map을 이용하는 방법 : https://velog.io/@e7838752/boj1302