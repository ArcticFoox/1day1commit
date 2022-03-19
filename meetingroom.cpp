#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int value[10];
    int n, end, begin;
    vector<pair<int, int>> sche;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> begin >> end;
        sche.push_back(make_pair(end, begin));
    }

    sort(sche.begin(), sche.end());

    int time = sche[0].first;
    int count = 1;
    for(int i = 1; i < n; i++){
        if(time <= sche[i].second){
            count++;
            time = sche[i].first;
        }
    }
    cout << count;
    return 0;
}