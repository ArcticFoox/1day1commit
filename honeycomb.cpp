#include<iostream>
using namespace std;

int main(){
    int n;
    int cnt = 1;

    cin >> n;

    n--;

    while(n > 0){
        n = n - 6 * cnt;
        cnt++;
    }

    cout << cnt << "\n";
    return 0;
}