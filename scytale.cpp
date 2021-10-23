#include<iostream>
using namespace std;

int main(){
    string input;
    int size;
    cin >> size >> input;

    for(int i = 0 ; i < input.size(); i++){
        if(i % size == 0){
            cout << input.at(i);
        }
    }
    return 0;
}