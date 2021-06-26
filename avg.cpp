#include<iostream>

using namespace std;

int main(){
	int c = 0;
	int n = 0;
	int arr[100]={0,}; //vector로 풀려 했는데 생각해보니 1 <= n <= 1000 이라 나타나있음을 확인하지 못함
	int average=0; 
	int sum=0;		
	int count=0;    
	double result=0;

	cin>>c; 
	
	for(int i=0; i<c; i++){
		sum=0;
		count=0;
		average=0; 
		cin>>n;
		
		for(int j=0; j<n; j++){
			cin>>arr[j];	//점수 사용자 입력
			sum+=arr[j];	//누적합계 
		}
		
		average=sum/n; //평균구하기
		 
		
		for(int j=0; j<n; j++){
			if(arr[j]>average) count++; //평균보다 높은 점수 개수 구하기 
		}
		
		result=(double)count/n*100; //평균보다 높은 점수의 사람이 몇퍼센트인가
		 
		// C++에서 소수점을 나타내는 방법(주의하여 보기)
		cout << fixed;				//소수점 이하의 자릿수만 다룰수있도록 함 
		cout.precision(3);			//소수점 이하 3개의 수를 나타낼것 
		cout<<result<<"%"<<endl;	//최종 결과 출력 
		
	}
	 
	return 0;
}