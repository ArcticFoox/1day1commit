#include<iostream>
#include<queue>
using namespace std;

int main(){

    int n;
    int arr[100001];
    priority_queue<int> max_pq, min_pq;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        if(max_pq.size() > min_pq.size())
            min_pq.push(-arr[i]);
        else
            max_pq.push(arr[i]);
        
        if(max_pq.empty() == false && min_pq.empty() == false){
            if(max_pq.top() > -min_pq.top()){
                int max_value = max_pq.top();
                int min_value = -min_pq.top();
                max_pq.pop(); min_pq.pop();

                max_pq.push(min_value);
                min_pq.push(-max_value);
            }
        }
        cout << max_pq.top() << "\n";
    }
    return 0;
}    
//https://yabmoons.tistory.com/478
