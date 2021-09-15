#include<iostream>
using namespace std;

int arr[500000], arr2[500000];

long long fun(int start, int end){
    if(start == end){
        return 0;
    }

    int mid = (start + end) / 2;

    long long result = fun(start, mid) + fun(mid + 1, end);

    int i = start;
    int j = mid + 1;
    int idx = 0;
    while(i < mid || j <= end){
        if(i <= mid && (j > end || arr[i] <= arr[j]))
            arr2[idx++] = arr[i++];
        else{
            result += (mid - i + 1) * 1LL;
            arr2[idx++] = arr[j++];
        }
    }

    for(int k = start; k <= end; k++){
        arr[k] = arr2[k - start];
    }
    return result;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    long long result = fun(0, n - 1);

    cout << result << "\n";

    return 0;

}

//https://jaimemin.tistory.com/1157