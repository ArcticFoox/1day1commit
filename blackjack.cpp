#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> t;
    int a;
    int b;
    int max = 0;
    int sum = 0;
    cin >> a;
    cin >> b;

    for(int i = 0; i < a; i++){
        cin >> t[i];
    }

    for(int i = 0; i < a-2; i++){
        for(int j = i+1; j < a-1; j++){
            for(int k = i+2; k < a; k++){
                sum = t[i] + t[j] + t[k];
                if(sum <= b && max < sum){
                    max = sum;
                }
            }
        }
    }

    cout << max;

    return 0;
}