#include<iostream>
#include<string>
using namespace std;

int main(){
    int n, num1, num2;
    cin >> n;

    for(int i = 0; i < n; i++){
        int count = 0;
        cin >> num1 >> num2;

        for(int j = num1; j <= num2; j++){
            string tmp = to_string(j);

            for(char letter : tmp){
                if(letter == '0') count++;
            }
        }
        cout << count << '\n';
    }
    return 0;
}

