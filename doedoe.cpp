#include<iostream>
using namespace std;

int main(){
    int max = 0;
    string str;
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        int cnt = 0;
        cin >> str;

        for(int j = 0; j < str.size(); j++){
            if(str.substr(j, 3) == "for"){
                cnt++;
                j += 2;
            }
            else if(str.substr(j, 5) == "while"){
                cnt++;
                j += 4;
            }
            else
                continue;
        }

        if(cnt > max){
            max = cnt;
        }
    }

    cout << max;
    return 0;
}