#include<iostream>
using namespace std;

int fiboarr[100] = { 0, };
// Top-Down  큰수부터 시작하여 가장 작은 수까지 도달하게 되는 방식
int fibo(int n){
    if(n <= 2)
        return 1;
    if(fiboarr[n] == 0)
        fiboarr[n] = fibo(n - 1) + fibo(n - 2);
    return fiboarr[n];
}
// Buttom-Up 작은수부터 가장 큰 수까지 증가하는 방식
int fibo2(int n){
    fiboarr[0] = 0;
    fiboarr[1] = 1;
    for(int i = 2; i <= n; i++){
        fiboarr[i] = fiboarr[i - 1] + fiboarr[i - 2];
    }
    return fiboarr[n];
}

int main(){
    return 0;
}