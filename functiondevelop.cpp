#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    int progresses[100] = { 0, };
    int speeds[100] = { 0, };
    int n;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> progresses[i];
    }

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> speeds[i];
    }

    for (int i = 0; i < n; i++) {
        int day = 0;
        while (progresses[i] < 100) {
            day++;
            progresses[i] += speeds[i];
        }
        q.push(day);
    }

    while(!q.empty()){
        int first = q.front(), cnt = 1;
        q.pop();

        while ((!q.empty()) && (q.front() <= first)) {
            q.pop();
            cnt++;
        }
        cout << cnt << " ";
    }
    return 0;
}