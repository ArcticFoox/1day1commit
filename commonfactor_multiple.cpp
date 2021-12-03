#include<iostream>

using namespace std;

int gcd(int n, int m){              //유클리드 호제법
    if(m == 0) return n;
    else return gcd(m, n % m);
}

int main(){
    int n, m;

    scanf("%d %d", &n, &m);

    printf("%d\n", gcd(n, m));
    printf("%d\n", n * m / gcd(n, m));

    return 0;
}