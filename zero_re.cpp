#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    int n, m;
    int sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> m;
        if(m == 0){
            if(st.empty()) continue;
            else st.pop();
        }
        else
            st.push(m);
    }
    if(st.empty())
        cout << 0 << "\n";
    else{
        while(!st.empty()){
            sum += st.top();
            st.pop();
        }
        cout << sum << "\n";
    }

    return 0;
}