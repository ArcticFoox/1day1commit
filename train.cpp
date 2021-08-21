#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n = 0, m;
    int max = 0;
    int in_train = 0;

    if(n == 0){
        while(true){
            cin >> n >> m;
            in_train = in_train + m - n;

            if(max < in_train){
                max = in_train;
            }
            if(m == 0)
                break;
        }
    }

    cout << max << '\n';

    return 0;
}