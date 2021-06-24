#include<iostream>

using namespace std;

int recursive(int n){
    if (n == 0) return 0;  //recursion이 일어날때 n의 기준점을 정확하게 파악할 필요가 있다. ex) n - 2 가 0이라고 n == 2 라는 오류를 범하지 않도록 한다.
    else if (n == 1) return 1;
    else return recursive(n - 2) + recursive(n - 1);
    
}

int main(){
    int n = 0;
    cin >> n;

    cout << recursive(n) ;

    return 0;
}