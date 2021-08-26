#include<iostream>

using namespace std;

int reverse(int num){
    int hund, ten, one;

    hund = num / 100;
    num %= 100;
    ten = (num / 10) * 10;
    one = (num % 10) * 100;

    return one + ten + hund;
}
int main(){
    
    int n, m;

    scanf("%d %d", &n, &m);

    if(reverse(n) < reverse(m))
        cout << reverse(m) << '\n';
    else
        cout << reverse(n) << '\n';

    return 0;
}