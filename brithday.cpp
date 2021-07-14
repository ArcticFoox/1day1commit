#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


struct birth{
    string name;
    int dd, mm, yyyy;
};

bool compare(const struct birth& x, const struct birth& y) {
	if (x.yyyy < y.yyyy)
		return true;
	else if (x.yyyy == y.yyyy) {
		if (x.mm < y.mm)
			return true;
		else if (x.mm == y.mm) {
			if (x.dd < y.dd)
				return true;
			else
				return false;
		}
		else
			return false;
	}
	else
		return false;
}


int main(){
    int n;
    vector<birth> contain;

    ios_base::sync_with_stdio(0);
	cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++) {
		string x;
		int a, b, c;
		cin >> x >> a >> b >> c;
		contain.push_back({ x,a,b,c });
	}

	sort(contain.begin(), contain.end(), compare);        // 이렇게 하면 가장 큰 것 부터 순차적으로 저장 됨
	cout << contain[n - 1].name << "\n" << contain[0].name << '\n';

    return 0;
}