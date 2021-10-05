#include<iostream>
#include<vector>
using namespace std;

char str[200005];
const int p = 29;
const int MOD = 10007;
int Len;
int pexp[200005];
vector<int> hashTable[10007];

void pre();
void solve();
bool ok(int);
void init();
bool real_match(int, int, int);

void pre(){
    pexp[0] = 1;
    for(int i = 1; i <= 200000; i++){
        pexp[i] = pexp[i - 1] * p % MOD;
    }
}

void solve(){
    scanf("%s", str);
    int l = 0, r = Len;
    while(l < r){
        int m = (l + r + 1) / 2;
        if(ok(m)) l = m;
        else r = m - 1;
    }
    cout << l << '\n';
}

bool ok(int L){
    init();
    int hash = 0;
    for(int i = 0; i < L; i++){
        hash *= p;
        hash += str[i] - 'a';
        hash %= MOD;
    }
    hashTable[hash].push_back(0);
    for(int i = L; i < Len; i++){
        hash -= (str[i - L] - 'a') * pexp[L - 1] % MOD;
        hash = (hash + MOD) % MOD;
        hash *= p;
        hash += str[i] - 'a';
        hash %= MOD;
        if(hashTable[hash].size()){
            for(int idx : hashTable[hash]){
                if(real_match(idx, i - L + 1, L)) return true;
            }
        }
        hashTable[hash].push_back(i-L+1);
    }
    return false;
}

void init(){
    for(int i = 0; i < MOD; i++){
        hashTable[i].clear();
    }
}

bool real_match(int s1, int s2, int L){
    for(int i = 0; i < L; i++){
        if(str[s1 + i] != str[s2 + i]){
            return false;
        }
    }
    return true;
}

int main(){
    pre();
    cin >> Len;
    solve();   
    return 0; 
}
//https://mike-tyson.tistory.com/39
//https://eine.tistory.com/entry/%EB%B0%B1%EC%A4%80%EC%A0%80%EC%A7%80-1605%EB%B2%88-%EB%B0%98%EB%B3%B5-%EB%B6%80%EB%B6%84%EB%AC%B8%EC%9E%90%EC%97%B4-%EB%AC%B8%EC%A0%9C-%ED%92%80%EC%9D%B4