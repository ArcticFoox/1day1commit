#include<iostream>
using namespace std;

int main(){
    int index, temp, min;

    int arr[3];

    for(int i = 0; i < 3; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < 3; i++){
        min = 1000001;
        for(int k = i; k < 3; k++){
            if(arr[k] < min){
                min = arr[k];
                index = k;
            }
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }

    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}