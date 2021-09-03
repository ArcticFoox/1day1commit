#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> v;
    int cnt = 1;

    for(int i = 0; i < 10; i++){
        int num, rest;
        cin >> num;
        rest = num % 42;

        v.push_back(rest);
    }

    sort(v.begin(), v.end());


    // int rm[42] = { 0 };
    // for (int i = 0; i < 10; i++) {
	// 	cin >> num;
	// 	rm[num % 42]++;
	// }

	// for (int i = 0; i < 42; i++) {
	// 	if (rm[i] != 0)
	// 		cnt++;
	// }

    // for(int i = 0; i < 10; i++){
    //     for(int j = 0; j < i; j++){
    //         if(v[i] == v[j])
    //             cnt++;
    //     }
    //     if(cnt == 0)
    //         cnt == 1;
    // }

    for(int i = 0; i < v.size() - 1; i++){
        if(v[i] != v[i+1]){
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}