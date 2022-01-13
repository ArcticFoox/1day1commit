#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int prices[100000];
    int n;

    for(int i = 0; i < n; i++){
        cin >> prices[i];
    }

    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = i + 1; j < n; j++){
            cnt++;
            if(prices[i] > prices[j]){
                break;
            }
        }
        v.push_back(cnt);
    }

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}
//https://ssocoit.tistory.com/15