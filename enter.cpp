#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    map<string, bool>arr;

    cin >> n;

    vector<string> t(n + 1);

    for(int i = 0; i < n; i++){
        string name, type;
        cin >> name >> type;

        if (arr.count(name)){

            if(type == "enter"){
                arr[name] = true;
            }

            else{
                arr[name] = false;
            }
            continue;
        }

        t.push_back(name);
        arr[name] = true;
    }

    sort(t.begin(), t.end(), greater<string>());

    int result = 0;

    for(int i = 0; i < t.size(); i++){
        if(arr[t[i]] == true){
            cout << t[i] << "\n";
        }
    }

    return 0;
}