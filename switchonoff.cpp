#include<iostream>
using namespace std;

int main(){
    int arr[101];
    int n, m;
    int num, sex;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> sex >> num;

        if(sex == 1){
            for(int j = 1; j <= n; j++){
                if(j % num == 0){
                    if(arr[j] == 0){
                        arr[j] = 1;
                    }
                    else
                        arr[j] = 0;
                }
            }
        }

        else{
            int a = 1;
            while(true){
                if(arr[num - a] == arr[num + a]){
                    if(arr[num - a] == 0 && arr[num + a] == 0){
                        arr[num - a] = 1;
                        arr[num + a] = 1;
                    }
                    else{
                        arr[num - a] = 0;
                        arr[num + a] = 0;
                    }
                a++;
                }
                else{
                    if(arr[num] == 0){
                        arr[num] = 1;
                    }
                    else
                        arr[num] = 0;
                    break;
                }
            }
        }
    }

    for(int i = 1; i <= n; i++){
        cout << arr[i] << " ";
        if(i % 20 == 0){
            cout << "\n";
        }
    }
    return 0;
}