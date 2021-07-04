#include<iostream>

using namespace std;

const int MAX = 20 + 1;
int soket[MAX][MAX][MAX];

int w(int a, int b, int c){
    if (a <= 0 || b <= 0 || c <= 0)
        return 1;

    if (a > 20 || b > 20 || c > 20)
        return w(20, 20, 20);

    int &result = soket[a][b][c];
    if(result != 0)
        return result;
    

    if (a < b && b < c)
        result = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);

    else
        result = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
    return result;
}

int main(){
    int a, b, c;
    int sum;
    scanf("%d %d %d", &a, &b, &c);

    printf("w(%d, %d, %d) = %d", a, b, c, w(a, b, c));
    
    return 0;
}