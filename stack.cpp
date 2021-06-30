#include<iostream>
#include<list>
using namespace std;

template<class T>
class LLStack{
public:
    LLStack(){}
    void clear() {
        lst.clear();
    }
    bool isEmpty() const{
        if(lst.empty()){
            return 1;
        }
        return lst.empty();
    }
    T& topEl(){
        return lst.back();
    }
    T& pop(){
        T el = lst.back();
        lst.pop_back();
        return el;
    }
    void push(const T& l){
        lst.push_back(l);
    }
    int size(){
        return lst.size();
    }
private:
    list<T> lst;

};

int main(){
    LLStack<int> t;
    int n;
    string str;
    int input;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%s", &str);

        if(str == "push"){
            scanf("%d", &input);
            t.push(input);
        }
        else if(str == "top"){
            cout << t.topEl() << '\n' ;
        }
        else if(str == "size"){
            cout << t.size() << '\n' ;
        }
        else if(str == "empty"){
            cout << t.isEmpty() << '\n' ; 
        }
        else if(str == "pop"){
            cout << t.pop() << '\n' ;
        }
    }
    return 0;
}