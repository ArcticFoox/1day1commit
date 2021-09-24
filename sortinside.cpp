#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[10];
    int n;
    int cnt = 0;
    cin >> n;

    while(n != 0){
        arr[cnt] = n % 10;
        cnt++;
        n /= 10;
    }

    sort(arr, arr + cnt, greater<int>());
    for(int i = 0; i < cnt; i++){
        cout << arr[i];
    }
    return 0;
}

void anotherway(){
    string n;
    cin >> n;

    sort(n.begin(), n.end(), greater<int>());
    cout << n;
    
    return;
}