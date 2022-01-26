#include<iostream>
using namespace std;

int main(){
    int x;
    int n;
    cin >> x >> n;

    for(int i = 1 ; i <= n; i++){
        cout << x * i << " ";
    }
}