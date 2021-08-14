#include<iostream>
#include<algorithm>

using namespace std;

long long card[10000000];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> card[i];
    }

    sort(card, card + n);

    int cnt = 1, max = 0, index = 0;

    for(int i = 0; i < n - 1; i++){
        if(card[i] == card[i+1]){
            cnt++;
            if(cnt > max){
                max = cnt;
                index = i;
            }
        }
        else
            cnt = 1;
    }

    cout << card[index] << '\n';

    return 0;
}