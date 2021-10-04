#include<iostream>
using namespace std;

int main(){
    int min_bu = 2000;
    int min_dr = 2000;
    int t;
    for(int i = 0; i < 5; i++){
        if(i < 3){
            cin >> t;
            if(t < min_bu){
                min_bu = t;
            }
        }
        else{
            cin >> t;
            if(t < min_dr){
                min_dr = t;
            }
        }
    }
    cout << min_bu + min_dr - 50 << "\n";

    return 0;
}