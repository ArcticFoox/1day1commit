#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main(){
    int n, p;
    scanf("%d\n", &n);
    

    for(int i = 0; i < n; i++){
        scanf("%d\n", &p);
        vector<pair<int, string>> k(p);        // (p)를 안 넣으면 오류가 계속 발생. vector는 동적 할당이여서 필요없지 않나? 왜 넣어야 하지?
        int max = 0;
        int maxnum = 0;
        for(int j = 0; j < p; j++){
           cin >> k[j].first >> k[j].second;
        }
        for(int l = 0; l < k.size(); l++){
            if(k[l].first > max){
                max = k[l].first;
                maxnum = l;
            }

        }
        cout << k[maxnum].second << '\n';
    }
    return 0;
}