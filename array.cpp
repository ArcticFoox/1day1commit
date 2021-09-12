#include<iostream>
using namespace std;

void select(int num){
    int min, temp, index;
    int data[1000];

    for(int i = 0; i < num; i++){
        cin >> data[i];
    }

    for(int i = 0; i < num; i++){
        min = 1001;
        for(int j = i; j < num; j++){
            if(min > data[j]){
                min = data[j];
                index = j;
            }
        }
        temp = data[i];
        data[i] = data[index];
        data[index] = temp;
    }

    for(int i = 0; i < num; i++){
        cout << data[i] << " ";
    }
}

void bubble(int num){
    int data[1000];
    int temp;

    for(int i = 0; i < num; i++){
        cin >> data[i];
    }

    for(int i = 0; i < num; i++){
        for(int j = 0; j < num - 1 - i; j++){
            if(data[j] > data[j + 1]){
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < num; i++){
        cout << data[i] << " ";
    }
}

void insertion(int num){
    int temp;
    int data[1000];

    for(int i = 0; i < num; i++){
        cin >> data[i];
    }

    for(int i = 0; i < num - 1; i++){
        int j = i;
        while(j >= 0 && data[j] > data[j + 1]){
            temp = data[j];
            data[j] = data[j + 1];
            data[j + 1] = temp;
            j--;
        }
    }

    for(int i = 0; i < num; i++){
        cout << data[i] << " ";
    }
}

int main(){
    int num;

    cin >> num;

    select(num);

    cout << '\n';

    bubble(num);

    cout << '\n';

    insertion(num);

    return 0;
}

//https://hongku.tistory.com/150