#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    int n;
    string answer;
    int arr[] = {4, 1, 2};
    
    cin >> n;
    while(n){
        answer += to_string(arr[n % 3]);
        if(!(n % 3)){
            n = n / 3 - 1;
        }
        else{
            n /= 3;
        }
    }

    cout << answer;
    return 0;
}

//https://ongveloper.tistory.com/104