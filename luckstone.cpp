#include<iostream>
using namespace std;

int main(){
    int card1[2];
    int card2[2];
    
    cin >> card1[0] >> card1[1];
    cin >> card2[0] >> card2[1];

    while(card1[1] > 0 && card2[1] > 0){
        card1[1] -= card2[0];
        card2[1] -= card1[0];
    }

    if(card1[1] <= 0 && card2[1] <= 0){
        cout << "DRAW";
    }
    else if(card1[1] <= 0 && card2[1] > 0){
        cout << "PLAYER B";
    }
    else{
        cout << "PLAYER A";
    }
    return 0;
}