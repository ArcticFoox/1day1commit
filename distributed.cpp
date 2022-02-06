#include<iostream>
using namespace std;


int main(){
    int a, b;
    int temp;
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a >> b;
        temp = a;
        for(int j = 0; j < b - 1; j++){
            a = temp * a % 10;
        }

        if(a == 0)
            a = 10;
        
        cout << a;
    }
    return 0;
}