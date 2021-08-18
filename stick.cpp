#include<iostream>
#include<stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int max=0, n, m, cnt=0; 
    stack<int> s; 

    cin>>n; 

    for(int i=0; i<n; i++) { 
        cin>>m; s.push(m); 
    }

    while(s.size()) { 
        if(max<s.top()) { 
            max=s.top(); cnt++; 
        } 
        s.pop(); 
    } 
    cout<<cnt; 
    return 0;
}


// void repect(stack<int> arr, int num){
//     if(arr.top() > num || arr.empty())
//         arr.push(num);

//     else{
//         arr.pop();
//         repect(arr, num);
//     }
// }

// int main(){
//     ios_base::sync_with_stdio(false); cin.tie(NULL);
//     int n;
//     stack<int> arr;

//     cin >> n;

//     for(int i = 0; i < n; i++){
//         int num;
//         cin >> num;

//         if(i == 0 || arr.top() > num){
//             arr.push(num);
//         }

//         if(arr.top() <= num){
//             repect(arr, num);
//         }

        
//     }

//     cout << arr.size() << '\n';
    
//     return 0;
// }
// stack에 처음부터 큰 수를 넣기 위해 이렇게 코드를 작성 했지만 이방법 말고 스택에 모두 집어 넣은 후 하나씩 빼면서 큰 수를 찾아 count 하는 방법도 있다
// https://korean-otter.tistory.com/entry/17608-%EB%B0%B1%EC%A4%80-%EB%A7%89%EB%8C%80%EA%B8%B0-C