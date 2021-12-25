#include<iostream>
using namespace std;

int result(int cnt){
    if(cnt == 6){
        return 1;
    }
    else if(cnt == 5){
        return 2;
    }
    else if(cnt == 4){
        return 3;
    }
    else if(cnt == 3){
        return 4;
    }
    else if(cnt == 2){
        return 5;
    }
    else
        return 6;
}

int main(){
    int lottos[6];
    int win_nums[6];
    int maxcnt = 0, mincnt = 0;

    for(int i = 0; i < 6; i++){
        cin >> lottos[i];
    }

    for(int i = 0; i < 6; i++){
        cin >> win_nums[i];
    }

    for(int i = 0; i < 6; i++){
        if(lottos[i] == 0){
                maxcnt++;
                continue;
            }

        for(int j = 0; j < 6; j++){
            if(lottos[i] == win_nums[j]){
                maxcnt++;
                mincnt++;
            }
        }
    }

    cout << result(maxcnt) << " " << result(mincnt);
}

