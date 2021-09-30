#include<iostream>
#include<vector>
using namespace std;

const int mod = 1e5 + 3;

int MOD(long long n){
    if(n >= 0) return n % mod;
    else return ((-n / mod + 1) * mod + n) % mod;
}

int main(){
    int l;
    char s[200005];
    scanf("%d %s", &l, s);
    int t = 0, r = l;
    while(t + 1 < r){
        int mid = (t + r) / 2;
        long long pow = 1;
        int hash = 0;
        vector<int> pos[mod];
        bool found = false;

        for(int i = 0; i + mid < l; i++){
            if(i == 0){
                for(int j = 0; j < mid; j++){
                    hash = MOD(hash + s[mid - 1 - j] * pow);
                    if(j + 1 < mid) pow = MOD(pow << 1);
                }
            }
            else{
                hash = MOD(2 * (hash - s[i - 1] * pow) + s[i + mid - 1]);
            }

            if(!pos[hash].empty()){
                for(int p : pos[hash]){
                    bool flag = true;
                    for(int j = 0; j < mid; j++){
                        if(s[i + j] != s[p + j]){
                            flag = false;
                            break;
                        }
                    }

                    if(flag){
                        found = true;
                        break;
                    }
                }
            }
            if(found) break;
            else pos[hash].push_back(i);
        }
        if(found) t = mid;
        else r = mid;
    }
    printf("%d", t);
    return 0;
}