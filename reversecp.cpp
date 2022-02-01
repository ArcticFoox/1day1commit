#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string num1, num2;

    cin >> num1 >> num2;

    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    for(int i = 0; i < 3; i++){
        if(num1[i] > num2[i]){
            cout << num1;
            break;
        }
        else if(num1[i] == num2[i]){
            continue;
        }
        else{
            cout << num2;
            break;
        }
    }

    return 0;
}