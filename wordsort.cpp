#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(string a, string b){
    if(a.length() == b.length())
        return a < b;
    return a.length() < b.length();
}

int main(){
    vector<string> str;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(find(str.begin(), str.end(), s) == str.end());
            str.push_back(s);
    }// find = begin -> end 이동 하면서 값(s)가 있으면 그 값 반환
     // 없다면 end 값 반환
    sort(str.begin(), str.end(), compare);

    cout << "---------\n";
    for(int i = 0; i < str.size(); i++){
        cout << str[i] << "\n";
    }

    return 0;
}