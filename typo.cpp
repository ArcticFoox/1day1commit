#include<iostream>
#include<string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int T;

    cin >> T;

    for(int i = 0; i < T; i++){
        int num;
        string name;

        cin >> num >> name;

        for(int i = 0; i < name.size(); i++){
            if( i != num - 1){
                cout << name[i];
            }
        }
        cout << '\n';
    }

}