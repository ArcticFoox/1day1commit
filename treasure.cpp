#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    int arra[50];
    int arrb[50];
    int sum = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arra[i];
    }

    for(int i = 0; i < n; i++){
        cin >> arrb[i];
    }

    sort(arra, arra + n, greater<int>());
    sort(arrb, arrb + n);

    for(int i = 0; i < n; i++){
        sum += arra[i] * arrb[i];
    }
    cout << sum;
    return 0;
}