#include<iostream>
#include<vector>
#include<string>
using namespace std;

int abs(int n){
    if (n < 0) return -n;
    else return n;
}

int distance(int pos, int dest){
    int dist = 0;

    dist += abs((pos - 1) / 3 - (dest - 1) / 3); // 행의 차이       
    dist += abs((pos - 1) % 3 - (dest - 1) % 3); // 열의 차이

    return dist;
}
//https://ansohxxn.github.io/programmers/52/

int main(){
    vector<int> numbers;
    string hand;
    int n, m;
    int left_p = 10, right_p = 12;

    cin >> n;

    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        numbers.push_back(m);
    }

    cin >> hand;

    for(int i = 0; i < n; i++){
        if(numbers[i] == 0){
            numbers[i] = 11;
        }

        if(numbers[i] % 3 == 1){
            cout << "L";
            left_p = numbers[i];
        }
        else if(numbers[i] % 3 == 2){
            int left_dist = distance(left_p, numbers[i]);
            int right_dist = distance(right_p, numbers[i]);
            
            if (left_dist < right_dist){
                left_p = numbers[i];
                cout << "L";
            }
            else if (right_dist < left_dist){
                right_p = numbers[i];
                cout << "R";
            }
            else if (right_dist == left_dist){
                if (hand == "left")
                {
                    left_p = numbers[i];
                    cout << "L";
                }
                else if (hand == "right")
                {
                    right_p = numbers[i];
                    cout << "R";
                }
            }
        }
        else{
            cout << "R";
            right_p = numbers[i];
        }
    }

    return 0;
}