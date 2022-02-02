#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int, vector<int>, less<int>> max_heap;
    priority_queue<int, vector<int>, greater<int>> min_heap;
    int n, val;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> val;

        //최대 힙의 크기는 최소 힙의 크기와 같거나, 하나 더 크다.
        if(max_heap.empty()) 
            max_heap.push(val);

        else if(max_heap.size() == min_heap.size())
            max_heap.push(val);
        
        else
            min_heap.push(val);

        //최대 힙의 최대 원소는 최소 힙의 최소 원소보다 작거나 같다.
        if(!max_heap.empty() && !min_heap.empty() && !(max_heap.top() <= min_heap.top())){
            int a = max_heap.top();
            int b = min_heap.top();

            max_heap.pop();
            min_heap.pop();

            max_heap.push(b);
            min_heap.push(a);
        }
        cout << max_heap.top();        
    }
    return 0;
}
//https://www.crocus.co.kr/625