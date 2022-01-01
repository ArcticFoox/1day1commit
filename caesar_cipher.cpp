#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;

    cin >> str;

    for(int i = 0; i < str.size(); i++){
        if(str[i] >= 'C' && str[i] <= 'Z'){
            str[i] -= 3;
        }
        else{
            str[i] += 23;
        }
    }

    cout << str;
    return 0;
}