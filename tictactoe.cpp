#include<iostream>
#include<string>
using namespace std;

char arr[3][3];
string input;

bool Xwin(){
    bool result = false;
    for(int i = 0; i < 3; i++){
        if(arr[i][0] == 'X'&& arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
            result = true;
    }
    for(int i = 0; i < 3; i++){
        if(arr[0][i] == 'X'&& arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
            result = true;
    }

    if(arr[0][0] == 'X'&& arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
        result = true;
    
    if(arr[0][2] == 'X'&& arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
        result = true;

    return result;
}

bool Owin(){
    bool result = false;
    for(int i = 0; i < 3; i++){
        if(arr[i][0] == 'O'&& arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
            result = true;
    }
    for(int i = 0; i < 3; i++){
        if(arr[0][i] == 'O'&& arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
            result = true;
    }

    if(arr[0][0] == 'O'&& arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
        result = true;
    
    if(arr[0][2] == 'O'&& arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
        result = true;

    return result;
}

int main(){
    cin >> input;

    while(input !="end"){
        int onum = 0, xnum = 0;
        bool owin = false, xwin = false;

        for(int i = 0; i < 9; i++){
            arr[i / 3][i % 3] = input[i];
            if(input[i] == 'O')
                onum++;
            else if(input[i] == 'X')
                xnum++;
        }

        owin = Owin();
        xwin = Xwin();

        if(xwin && !owin && xnum - onum == 1){
            cout << "Valid\n";
        }
        else if(!xwin && owin && onum == xnum){
            cout << "Valid\n";
        }
        else if(!xwin && !owin && xnum == 5 && onum == 4){
            cout << "Valid\n";
        }
        else{
            cout <<"invalid\n";
        }

        cin >> input;
        
    }
    return 0;
}
//https://kibbomi.tistory.com/183