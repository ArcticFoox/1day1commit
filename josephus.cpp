#include<iostream>
#include<list>

using namespace std;


int main(){
    list<int> t;
    int n;
    int k;

    scanf("%d %d", &n, &k);

    for(int i = 1; i <= n; i++){
        t.push_back(i);   
    }

    list<int>::iterator it = t.begin();

	cout << "<";
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < k - 1; j++) {
			if (it == t.end())
				it = t.begin();
			it++;
			if (it == t.end())
				it = t.begin();
		}
		cout << *it << ", ";
		it = t.erase(it);
		if (it == t.end())
			it = t.begin();
	}
	cout << *it << ">";

    
    return 0;
}