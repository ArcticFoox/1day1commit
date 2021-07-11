#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int N, x;
priority_queue<int,vector<int>,greater<int>> pq;  //priority_queue 에 대해서 좀 더 공부하자

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> x;
		if (x == 0)
		{
			if (pq.empty()) printf("0\n");
			else
			{
				printf("%d\n", pq.top());
				pq.pop();
			}
		}
		else pq.push(x);
	}

}