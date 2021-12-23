#include<iostream>
using namespace std;

int main(){
    int A, B, C, a, b, c;
    int n;
    int sum = 0, max = 0;

    cin >> A >> B >> C;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> a >> b >> c;
            sum += (A * a) + (B * b) + (C * c);
        }

        if(sum > max){
            max = sum;
        }
        sum = 0;
    }

    cout << max;
    return 0;
}