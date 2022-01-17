#include<iostream>
using namespace std;

int main(){
    string str = "wm";
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        cout << str[i % 2];
    }
    
    return 0;
}