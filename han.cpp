#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int num;

    cin >> num;

    int hund, ten, one;
    int cnt = 0;

    if(num < 100){
        cout << num << '\n';
    }

    else{
        for (int i = 100; i <= num; i++){
        hund = i/100;
         ten = (i%100)/10;
         one = (i%100)%10;
         if ((hund - ten) == (ten - one))
             cnt++;
        }        
        cout << (99+cnt) << '\n';
    }

    return 0;
}

//https://gabii.tistory.com/entry/BaekJoonC-%EB%B0%B1%EC%A4%80-1065%EB%B2%88-%ED%95%9C%EC%88%98