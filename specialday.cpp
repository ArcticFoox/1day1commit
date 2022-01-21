#include<iostream>
using namespace std;

int main(){
    int month, day;

    cin >> month >> day;

    if(month == 2 && day == 18){
        cout << "Special Day";
    }
    else if(month <= 2 && day < 18){
        cout << "Before";
    }
    else
        cout << "After";
    
    return 0;
}