#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> uni;

int Find(int v){
    if(v == uni[v]) return v;
    uni[v] = Find(uni[v]);
    return uni[v];
}

void Union(int a, int b){
    a = Find(a);
    b = Find(b);
    if(a < b) uni[b] = a;
    else uni[a] = b;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, m, temp;
    bool ch = false;

    cin >> n >> m;

    uni.resize(n + 1);

    for(int i = 1; i <= n; i++) uni[i] = i;

    vector<vector<int>> v(n + 1, vector<int>(n + 1, 0));
    vector<int> des(m + 1);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cin >> v[i][j];
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(v[i][j] == 1 && uni[i] != uni[j]) Union(i, j);
        }
    }

    for(int i = 1; i <= m; i++) cin >> des[i];
    temp = uni[des[1]];
    for(int i = 2; i <= m; i++){
        if(temp == uni[des[i]]){
            if(i == m) ch = true;
        }
        else{
            ch = false;
            break;
        }
    }

    if(!ch) cout << "NO" << "\n";
    else cout << "YES" << "\n";
    return 0;
}

// https://ssungkang.tistory.com/entry/Algorithm-%EC%9C%A0%EB%8B%88%EC%98%A8-%ED%8C%8C%EC%9D%B8%EB%93%9CUnion-Find
// https://astrid-dm.tistory.com/412