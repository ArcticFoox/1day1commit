#include<iostream>
using namespace std;

typedef unsigned int Uint;
const int MAX = 200010;
const int SIZE = 1 << 16;
const int MOD = SIZE - 1;
int n, low, high, mid, ans;
char str[MAX];
Uint h, wei[MAX] = { 1 };

struct Node{
    char* key;
    Node* next;
    Node* alloc(char* nk, Node* np){
        key = nk, next = np;
        return this;
    }
}buf[MAX], * htab[SIZE];
int bcnt;

int strncmp(const char* s, const char* t, int len){
    int i = 0;
    for(; i < len && s[i] == t[i]; ++i);
    return i == len;
}

void init(){
    bcnt = h = 0;
    for(int i = 0; i < SIZE; i++) htab[i] = NULL;
}

bool check(int mid){
    init();
    for(int i = 1; i <= n; i++){
        h = h * 33 + str[i];
        if(i >= mid){

            h -= wei[mid] * str[i - mid];
            int hidx = h & MOD;
            Node* p = htab[hidx];
            for(; p; p = p->next){
                if(strncmp(p->key, &str[i - mid + 1], mid))
                    return true;
            }
            htab[hidx] = buf[bcnt++].alloc(str + i - mid + 1, htab[hidx]);
        }
    }
    return false;
}
int main(){
    scanf("%d %s", &n, str + 1);
    for(int i = 1; i <= n; i++) wei[i] = wei[i - 1] * 33;

    high = n - 1;
    while(low <= high){
        mid = (low + high) / 2;
        if(check(mid)){
            ans = mid;
            low = mid * 1;
        }
        else
            high = mid - 1;

    }
    cout << ans << "\n";
    return 0;
}
//https://zoosso.tistory.com/406