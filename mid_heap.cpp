#include<iostream>
#include<algorithm>

using namespace std;

const int Max = 100010;

int n, Max_Heap_Idx, Min_Heap_Idx;
int arr[Max];
int Max_Heap[Max];
int Min_Heap[Max];

void Heap_push(int data, bool t){
    if(t){
        int i = ++Max_Heap_Idx;
        Max_Heap[i] = data;
        while((i != 1) && (data > Max_Heap[i / 2])){
            swap(Max_Heap[i], Max_Heap[i / 2]);
            i = i / 2;
        }
    }
}

int Heap_pop(bool t){
    if(t){
        int result = Max_Heap[1];
        Max_Heap[1] = Max_Heap[Max_Heap_Idx--];

        int parent = 1;
        int child;
        while(true){
            child = parent * 2;
            if(child + 1 <= Max_Heap_Idx && Max_Heap[child] < Max_Heap[child + 1]) child++;
            if(child > Max_Heap_Idx || Max_Heap[child] < Max_Heap[parent]) break;
            swap(Max_Heap[child], Max_Heap[parent]);
            parent = child;
        }
        return result;
    }

    int result = Min_Heap[1];
    Min_Heap[1] = Min_Heap[Min_Heap_Idx--];

    int parent = 1;
    int child;
    while(true){
        child = parent * 2;
        if(child + 1 <= Min_Heap_Idx && Min_Heap[child] < Min_Heap[child + 1]) child++;
        if(child > Min_Heap_Idx || Min_Heap[child] < Min_Heap[parent]) break;
        swap(Min_Heap[child], Min_Heap[parent]);
        parent = child;
    }
    return result;
}

int Get_size(bool t){
    if(t) return Max_Heap_Idx;
    return Min_Heap_Idx;
}

int Top(bool t){
    if(t) return Max_Heap[1];
    return Min_Heap[1];
}

void Input()
{
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
}

bool Empty(bool t)
{
    if (t == true)
    {
        if (Max_Heap_Idx == 0) return true;
        return false;
    }
    
    if (Min_Heap_Idx == 0) return true;
    return false;
}

void Solution(){
    for (int i = 0; i < n; i++){
        int Max_Heap_Size = Get_size(true);
        int Min_Heap_Size = Get_size(false);
        
        if (Max_Heap_Size > Min_Heap_Size) Heap_push(arr[i], false);
        else Heap_push(arr[i], true);
 
        if (Empty(true) == false && Empty(false) == false)
        {
            if (Top(true) > Top(false))
            {
                int Max_Value = Heap_pop(true);
                int Min_Value = Heap_pop(false);
                
                Heap_push(Min_Value, true);
                Heap_push(Max_Value, false);
            }
        }
 
        cout << Top(true) << endl;
    }
}
 
void Solve()
{
    Input();
    Solution();
}
 
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    Solve();
 
    return 0;
}

//https://yabmoons.tistory.com/478 [얍문's Coding World..]