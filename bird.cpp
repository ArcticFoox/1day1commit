#include<iostream>
using namespace std;

int main(){
    int birds;
    int count = 1, second = 0;

    cin >> birds;

    while(true){
        if(birds <= 0){
            break;
        }
        if(count > birds){
            count = 1;
        }
        birds -= count;
        count++;
        second++;
    }
    cout << second;
    return 0;
}