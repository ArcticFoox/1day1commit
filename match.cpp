#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    int cnt;
    int n;
    cin >> n;

    for(int a = 1; a < n; a++){
        for(b = a; b < n-1; b++){
            int c = n-(a+b);
            if(c < b) break;
            if(b+a > c) cnt++;
        }                           
    }
    cout << cnt;
    return 0;
}