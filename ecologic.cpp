#include<iostream>
#include<map>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    map<string, double>arr;
    int count = 0;
    string name;

    while(getline(cin, name)){     //입력을 그만 받으려면 어떻게 해야되나?
        arr[name]++;
        count++;
    }
    
    cout<<fixed;
    cout.precision(4);     // 소수점 자리 4자리 고정시키기

    for(auto it = arr.begin(); it != arr.end(); it++){
        string spicise = it->first;
        double pst = it->second;

        pst/=count;
        pst*=100;

        cout << spicise << pst << '\n';
    }

    return 0;
}
// https://mapocodingpark.blogspot.com/2020/01/BOJ-4358.html