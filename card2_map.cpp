#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    
    cin >> n;

    map<int, int>card;
    for(int i = 0; i < n; i++){
        int card_num;
        cin >> card_num;
        card[card_num]++;
    }

    int max_card;
    int max_count = 0;
    for(auto it = card.begin(); it != card.end(); it++){
        if(it->second > max_count){
            max_card = it->first;
            max_count = it->second;
        }
        else if(it->second == max_count){
            if(it->first < max_card){
                max_card = it->first;
            }
        }
    }

    cout << max_card << '\n';
    return 0;
}