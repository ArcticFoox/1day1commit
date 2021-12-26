#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> container;
    int moves[1000];
    int board[31][31];
    int n, m;
    int cnt = 0;

    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> board[i][j];
        }
    }

    cin >> m;

    for(int i = 0; i < m; i++){
        cin >> moves[i];
    }

    for(int i = 0; i < m; i++){
        for(int j = 1; j <= n; j++){
            if(board[j][moves[i]] == 0){
                continue;
            }
            else{
                if(container.empty()){
                    container.push(board[j][moves[i]]);
                    board[j][moves[i]] = 0;
                }
                else if(container.top() == board[j][moves[i]]){
                    board[j][moves[i]] = 0;
                    container.pop();
                    cnt += 2;
                }
                else{
                    container.push(board[j][moves[i]]);
                    board[j][moves[i]] = 0;
                }
                
                break;
            }    
        }
    }

    cout << cnt;
    return 0;
}