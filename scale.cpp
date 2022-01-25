#include<iostream>
using namespace std;

int main(){
    int arr[8];
    int in_cnt = 0, de_cnt = 0;

    for(int i = 0; i < 8; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < 7; i++){
        if(arr[i] + 1 == arr[i + 1]){
            in_cnt++;
        }

        else if(arr[i] - 1 == arr[i + 1]){
            de_cnt++;
        }
    }


    if(in_cnt == 7){
        cout << "ascending";
    }   
    else if(de_cnt == 7){
        cout << "descending";
    }
    else{
        cout << "mixed";
    }

    return 0;
}