#include<iostream>
#include<list>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    list<char> str;
    list<char>::iterator t;
    string L;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> L;
        str.clear();
        t = str.begin();
        for(int j = 0; j < L.length(); j++){  // iterator를 이용하여 각 노드에 위치에 접근할 수 있다는 사실을 외우자.
            if (L[j] == '<' && t != str.begin()) t--;  // 처음이 아닐때 위치 -
			else if (L[j] == '>' && t != str.end()) t++; // 끝이 아닐때 위치 +
			else if (L[j] == '-' && t != str.begin()) t = str.erase(--t); // 처음이 아닐때 삭제
			else if (L[j] != '<' && L[j] != '>' && L[j] != '-') str.insert(t, L[j]); // 모두 다 아닐땐 추가
        }

        for (t = str.begin(); t != str.end(); t++) cout << *t;
		cout << '\n';
    }
    return 0;
}