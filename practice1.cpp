#include<iostream>

using namespace std;

int recursive(int n){
    if(n == 0){
        return 1;
    }
    return n * recursive(n - 1);
}

int main(){
    int n = 0;
    cin >> n;

    cout << recursive(n) ;

    return 0;
}