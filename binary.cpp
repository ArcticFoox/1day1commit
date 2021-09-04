#include<iostream>

using namespace std;

int main(){
    int num;
    int digit = 0;

    cin >> num;

    while(num > 0){  // 이진수 만드는 방법 2로 나눈 나머지의 유무
        if(num % 2 == 1){
            cout << digit << " ";
        }
        num /= 2;
        digit++;
    }

    return 0;
}

