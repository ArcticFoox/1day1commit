#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    int max;

    cin >> name;

    int answer = name.size();
    for(int i = 1; i < name.size() / 2; i++){
        string convert, temp;

        int cnt = 1;
        temp = name.substr(0, i);

        for(int j = i; j < name.size(); j+=i){
            if(temp == name.substr(j, i)) 
                cnt++;

            else{
                if(cnt > 1)
                    convert += to_string(cnt);
                convert += temp;
                temp = name.substr(j, i);
                cnt = 1;
            }
        }

        if(cnt > 1)
            convert += to_string(cnt);

        convert += temp;
        if(answer > convert.size())
            answer = convert.size();
    }

    cout << answer << '\n';

    return 0;
}

//https://yjyoon-dev.github.io/kakao/2020/11/05/kakao-strzip/