#include<iostream>
using namespace std;

int main(){
    int t;
    int min_5 = 300, min = 60, sec_10 = 10;
    int cnt_1 = 0, cnt_2 = 0, cnt_3 = 0;
    cin >> t;

    while(t){
        if(t >= min_5){
            t -= min_5;
            cnt_1++;
        }
        else if(t >= min){
            t -= min;
            cnt_2++;
        }
        else if(t >= sec_10){
            t -= sec_10;   
            cnt_3++;
        }
        else{
            cout << -1 << "\n";
            return 0;
        }
    }
    cout << cnt_1 << " " << cnt_2 << " " <<cnt_3 << "\n";
    return 0;
}