#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    int n;
    int cnt = 0;
    int seq[100001];
    stack<int> t;
    vector<char> c;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        cin >> seq[i];

    for(int i = 1; i <= n; i++){
        t.push(i);
        c.push_back('+');

        while(!t.empty() && t.top() == seq[cnt]){
            t.pop();
            c.push_back('-');
            cnt++;
        }
    }

    if(!t.empty())
        printf("NO");
    
    else{
        for(int i = 0; i < c.size(); i++){
            printf("%c\n", c[i]);
        }
    }
    c.clear();

    return 0;
}