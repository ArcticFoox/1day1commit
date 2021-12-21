#include<iostream>
using namespace std;

int main(){
    int n;
    string str1, str2;

    cin >> n;
    cin >> str1;
    cin >> str2;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < str1.size(); j++){
            if(str1[j] == '0')
                str1[j] = '1';
            else
                str1[j] = '0';
        }
    }

    if(str1 == str2)
        cout << "Deletion succeeded";
    else
        cout << "Deletion failed";
    return 0;
}