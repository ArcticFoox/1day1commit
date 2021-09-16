#include<iostream>
#include<map>
using namespace std;

int main(){
    int n, m;
    map<string, int> str;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        string name;
        cin >> name;
        str.insert(pair<string, int>(name, 1));
    }

    int sum = 0;
    for(int i = 0; i < m; i++){
        string name;
        cin >> name;
        if(str[name]){
            sum++;
        }
    }

    cout << sum << '\n';
    return 0;
}