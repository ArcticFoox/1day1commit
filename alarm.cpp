#include<iostream>
using namespace std;

int main(){
    int n, m;

    cin >> n >> m;

    if(m < 45){
        if(n == 0){
            n = 24;
        }
        n--;
        m = 60 - (45 - m);
    }
    else{
        m -= 45;
    }

    cout << n << " " << m;
    return 0;
}