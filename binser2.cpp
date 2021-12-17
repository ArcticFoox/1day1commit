#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int number;
		cin >> number;
		auto l = lower_bound(a.begin(), a.end(), number); // 하한 : 같거나 큰거 중에 첫번째 index
		auto r = upper_bound(a.begin(), a.end(), number); // 상한 : 큰거 중에 첫번째 index
		cout << r - l << ' '; // 상한 - 하한 하면 총 같은 개수 나옴
	}
	cout << '\n';
}