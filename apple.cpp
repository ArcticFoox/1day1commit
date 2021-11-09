#include<iostream>
using namespace std;

int main(){
    int n;
    int cnt = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int m, k;
        cin >> m >> k;

        cnt += (k % m);
    }

    cout << cnt;
    return 0;
}