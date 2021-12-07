#include<iostream>
using namespace std;

int main(){
    int cnt;
    char ans[10];
    int index = 0, check = 0;
    char input[10][7];
    char str[10][7] = {{'0','0','0','0','0','0'},  // A
				   {'0','0','1','1','1','1'},  // B
				   {'0','1','0','0','1','1'},  // C
				   {'0','1','1','1','0','0'},  // D
				   {'1','0','0','1','1','0'},  // E
				   {'1','0','1','0','0','1'},  // F
				   {'1','1','0','1','0','1'},  // G
				   {'1','1','1','0','1','0'}}; // H
    char cha[8] = { 'A','B','C','D','E','F','G','H' };
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 6; j++){
            scanf("%c", &input[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 8; j++){
            cnt = 0;
            for(int k = 0; k < 6; k++){
                if(str[j][k] != input[i][k])
                    cnt++;
            }
            if(cnt == 0 || cnt == 1){
                ans[index] = cha[j];
                index++;
                break;
            }

            if(j == 7){
                check = i + 1;
            }
        }
        if(check != 0){
            break;
        }
    }

    if(!check){
        for(int i = 0; i < n; i++){
            printf("%c", ans[i]);
        }
    }
    else
        printf("%d", check);

    return 0;
}