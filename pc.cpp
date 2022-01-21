#include<iostream>
using namespace std;

int main(){
    bool arr[100];

    int n, num;
    int answer = 0;
    cin >> n;

    for(int i = 0 ; i < n; i++){
        cin >> num;

        if(arr[num - 1]){
            answer++;
        }
        else{
            arr[num - 1] = true;
        }
    }
    return 0;
}