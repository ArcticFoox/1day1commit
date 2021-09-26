#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int A, B, C;
    int cnt = 1;
    cin >> A >> B >> C;

    if(B >= C){
        cout << -1 << "\n";
        return 0;
    }

    cnt = A/(C - B) + 1;

    cout << cnt << "\n";
    // else{
    //     sum = A;
    //     while(sum > 0){
    //         sum += (B - C);
    //         cnt++;
    //     }
    //     cout << cnt << "\n";
    // }
    return 0;
}
//https://travelerfootprint.tistory.com/33