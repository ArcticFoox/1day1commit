#include<iostream>
#include<queue>

using namespace std;

int main(){
    int test;
    int n, m, priority;
    scanf("%d", &test);

    for(int i = 0; i < test; i++){
        int count = 0;

        scanf("%d %d", &n, &m);
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        for (int j = 0; j < n; ++j) {
            scanf("%d", &priority);
            q.push({ j, priority });
            pq.push(priority);
        }

        while (!q.empty()) {
            int index = q.front().first;
            int value = q.front().second;
            q.pop();
            if (pq.top() == value) {
                pq.pop();
                ++count;
                if (index == m) {
                    cout << count << endl;
                    break;
                }
            }
            else q.push({ index,value });
        }
    }
}

//http://melonicedlatte.com/algorithm/2018/02/18/230705.html