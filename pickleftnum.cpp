#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//시간복잡도가 높고 core dump가 일어남
void my_answer(){
    bool arr[100001] = { 0 };
    vector<int> container = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> selection = {1, 2, 3, 4, 5, 6, 8, 9, 10};
    int index;
    for(int i = 0; i < selection.size(); i++){
        for(int j = 0; j < container.size(); j++){
            if(selection.at(i) == container.at(j)){
                arr[j] = true;
            }
        }
    }
    
    for(int i = 0; i < container.size(); i++){
        if(arr[i] == false){
            index = i;
        }
    }
    int answer = container.at(index);

    cout << answer << "\n";
}
int main(){
    //algorithm을 추가하여 정렬을 통해 시간복잡도를 줄이고 core dump가 일어나지 않게 만듬
    vector<int> container = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> selection = {1, 2, 3, 4, 5, 6, 8, 9, 10};
    sort(container.begin(), container.end());
    sort(selection.begin(), selection.end());
    
    for (int i=0;i<container.size(); i++){
        if (container[i] != selection[i])
            return container[i];
    }

    return 0;
}