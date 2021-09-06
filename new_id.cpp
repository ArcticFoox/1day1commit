#include<iostream>
#include<string>
using namespace std;

int main(){
    string new_id;

    cin >> new_id;

    for(int i = 0; i < new_id.length(); i++){
        if(new_id[i] >= 'A' && new_id[i] <= 'Z'){
            new_id[i] = tolower(new_id[i]);
        }
    }

    for(int i = 0; i < new_id.length(); ){
        if((new_id[i] >= 'a' && new_id[i] <= 'z') 
            || (new_id[i] >= 0 && new_id[i] <= 9)
            || new_id[i] == '-' || new_id[i] == '_'
            || new_id[i] == '.'){

            i++;
            continue;
        }
        
        new_id.erase(new_id.begin() + i);
    }

    for(int i = 1; i < new_id.length(); ){
        if (new_id[i] == '.' && new_id[i - 1] == '.'){
            new_id.erase(new_id.begin() + i);
            continue;
        }
        else
            i++;
    }

    if (new_id.front() == '.') new_id.erase(new_id.begin());
    if (new_id.back() == '.') new_id.erase(new_id.end() - 1);

    if(new_id.empty()) new_id = "a";

    if(new_id.length() >= 16){
        new_id.erase(new_id.begin() + 15, new_id.end());
        if(new_id[new_id.length() - 1] == '.')
            new_id.erase(new_id.end() - 1);
    }

    if(new_id.length() <= 2){
        char c = new_id[new_id.length() - 1];
        while(new_id.length() != 3){
            new_id.push_back(c);
        }
    }

    cout << new_id << '\n';

    return 0;
}

//https://velog.io/@yoou/%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%98%EB%A8%B8%EC%8A%A4Level-1-%EC%8B%A0%EA%B7%9C-%EC%95%84%EC%9D%B4%EB%94%94-%EC%B6%94%EC%B2%9CC
//https://ansohxxn.github.io/programmers/73/