#include<iostream>
using namespace std;

int main(){
    int brown, yellow;
    int width, height;
    cin >> brown >> yellow;

    int carpet = brown + yellow;

    for(int i = carpet / 2; i > 0; i--){
        if(carpet % i == 0){
            int a = i;
            int b = carpet / i;
            if((a - 2) * (b - 2) == yellow){
                width = a;
                height = b;
            }
        }
    }
    cout << width << height;
    return 0;
}