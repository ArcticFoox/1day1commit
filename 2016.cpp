#include<iostream>
using namespace std;

int main(){
    string days[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int month[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = 0;
    int a, b;
    cin >> a >> b;
    for(int i = 0; i < a - 1; i++){
        sum += month[i];
    }
    int n = (sum + b) % 7;
    string answer = days[(n+4)%7];
    cout << answer;
    return 0;
}