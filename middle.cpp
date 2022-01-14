#include<iostream>
using namespace std;

int main(){
    string str;
    int n;
    cin >> str;

    n = str.size();
    if(n % 2 == 0)
        cout << str[n / 2 - 1] << str[n / 2];
    else
        cout << str[n / 2];
    return 0;
}