#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool Check(string str){
    int len = (int)str.length();
    stack<char> checker;

    for(int i = 0; i < len; i++){
        char c = str[i];

        if(c == '('){
            checker.push(str[i]);
        }

        else{
            if(!checker.empty())
                checker.pop();
            else
                return false;
        }
    }

    return checker.empty();    // result is true or false
}

int main(){
    int n;
    scanf("%d", &n);
 
    for(int i=0; i<n; i++){
        string str;
        cin >> str;           //how to express c not c++
 
        if(Check(str)){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    return 0;
}
