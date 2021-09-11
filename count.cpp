#include<iostream>
using namespace std;

int main(){
    int n;
    int cnt;
    int arr[200] = {0, };
    cin >> n;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        arr[num]++;
    }
    int x;

    cin >> x;

    cout << arr[x] << '\n';

    return 0;
}