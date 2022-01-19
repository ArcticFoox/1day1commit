#include<iostream>
#include<string>
using namespace std;

int main(){
    string str, tmp;
    int answer = 0;
    cin >> str;

    for(int i = 0; i < str.size(); i++){
        if(str[i] >= '0' && str[i] <= '9'){
            tmp.push_back(str[i]);
            continue;
        }
        if(str.size()-i>=5 && str.substr(i,5)=="three") tmp.push_back('3');
        else if(str.size()-i>=5 && str.substr(i,5)=="seven") tmp.push_back('7');
        else if(str.size()-i>=5 && str.substr(i,5)=="eight") tmp.push_back('8');
        else if(str.size()-i>=4 && str.substr(i,4)=="zero") tmp.push_back('0');
        else if(str.size()-i>=4 && str.substr(i,4)=="four") tmp.push_back('4');
        else if(str.size()-i>=4 && str.substr(i,4)=="five") tmp.push_back('5');
        else if(str.size()-i>=4 && str.substr(i,4)=="nine") tmp.push_back('9');
        else if(str.size()-i>=3 && str.substr(i,3)=="one") tmp.push_back('1');
        else if(str.size()-i>=3 && str.substr(i,3)=="two") tmp.push_back('2');
        else if(str.size()-i>=3 && str.substr(i,3)=="six") tmp.push_back('6');
        
    }

    answer = stoi(tmp);

    cout << answer;
    return 0;
}
//https://yjyoon-dev.github.io/kakao/2021/07/12/kakao-numstrengword/