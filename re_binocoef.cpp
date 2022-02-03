#include<iostream>
using namespace std;

long long MOD = 1000000007;
int n, k;
//분할 정복을 통해 해결
long long pow(long long num, long long idx){
    if(idx == 0) return 1;
    else if(idx == 1) return num;
    // idx가 짝수면 {Pow(Num, Idx/2)* Pow(Num, Idx/2)} % MOD를 반환
    if(idx % 2 == 0){
        long long temp = pow(num, idx / 2) % MOD;
        return (temp * temp) % MOD;
    }
    //홀수면 {(Pow(Num,Idx-1)*Num)} % MOD를 반환
    long long temp = pow(num, idx - 1) % MOD;
    return (num * temp) % MOD;
}

int main(){
    cin >> n >> k;
    long long up = 1, down = 1, result;
    for(int i = 2; i <= n; i++){
        up *= i;
        up %= MOD;
    }

    for (int i = 1; i <= n - k; i++) {
		down *= i;
		down %= MOD;
	}

	for (int i = 1; i <= k; i++) {
		down *= i;
		down %= MOD;
	}

	result = up*pow(down, MOD - 2);
	cout << result % MOD;
	return 0;
} //https://imnotabear.tistory.com/98