#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    int arr[5] = { 0, };
    int cnt = 0;

    for(int i = 0; i < 5; i++){
        cin >> str;

        for(int j = 0; j < str.size() - 2; j++){
            if(str[j] == 'F' && str[j + 1] == 'B' && str[j + 2] == 'I'){
                arr[i] = 1;
                cnt++;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        if(arr[i]){
            cout << i + 1 << " ";
        }
    }
    
    if(!cnt)
        cout << "HE GOT AWAY!";
    
    return 0;
}