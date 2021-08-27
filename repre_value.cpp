#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> arr;
    int sum = 0;
    float avg = 0;
    int max = 0;
    int cnt = 0;
    int index = 0;

    for(int i = 0; i < 10; i++){
        int num;
        cin >> num;
        arr.push_back(num);
        sum += num;
    }

    avg = (float)sum / 10;

    sort(arr.begin(), arr.end());

    for(int i = 0; i < 9; i++){
        cnt = 1;
        if(arr[i] == arr[i + 1]){
            cnt++;

            if(cnt > max){
                max = cnt;
                index = i;
            }
        }
    }
    cout << avg << '\n' << arr[index] << '\n';

    return 0;
}