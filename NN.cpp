#include<iostream>
#include<string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, m;
    cin >> n >> m;
    string str;

    for(int i = 0; i < n; i++){
        str += to_string(n);
    }

    if(str.length() > m){
        cout << str.substr(0, m);
    }
    else{
        cout << str;
    }
    return 0;
}