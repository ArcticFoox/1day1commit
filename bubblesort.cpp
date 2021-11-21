#include<iostream>
using namespace std;

const int Max = 500000;

int arr[Max], arr2[Max];

long long fun(int start, int end){
    if(start == end)
        return 0;

    int mid = (start + end) / 2;

    long long result = fun(start, mid) + fun(mid + 1, end);

    int i = start;
    int j = mid + 1;
    int idx = 0;
    while(i <= mid || j <= end){
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
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    long long result = fun(0, n - 1);
    cout << result << "\n";
    return 0;
}