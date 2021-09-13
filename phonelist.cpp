#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main(){
    int t, n;
    vector<string> v;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++){
            string num;
            cin >> num;
            v.push_back(num);
        }
        sort(v.begin(), v.end());
        
        bool ans = true;

        for(int i = 1; i < n; i++){
            string s1 = v[i - 1];
            string s2 = v[i];

            if(s1.size() > s2.size()) continue;

            string temp = "";
            for(int j = 0; j < s1.size(); j++){
                temp += s2[j];
            }

            if(s1 == temp){
                ans = false;
                break;
            }
        }
        if(ans) cout << "YES" << "\n";
        else cout << "NO" << "\n";

        v.clear();
    }
    return 0;
}
//https://cocoon1787.tistory.com/522