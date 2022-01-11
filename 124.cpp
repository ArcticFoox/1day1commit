#include<iostream>
using namespace std;

int main(){
    int input;
    int numbers[] = {4, 1, 2};
    int digit = 1;
    int result = 0;
    cin >> input;

    while(input > 0){
        result += numbers[input % 3] * digit;
        if(input % 3 == 0) input = (input / 3) - 1;
        else input = input / 3;
        digit *= 10;
    }
    cout << result;
    return 0;
} // https://yabmoons.tistory.com/692