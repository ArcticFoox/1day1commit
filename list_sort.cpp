#include<iostream>
#include<list>
#include<vector>
#include<string>
using namespace std;

struct Node{
    string name;
    vector<string> num;

    Node(){}

    Node(string name){
        this->name = name;
    }

};

bool compare(const Node& a, const Node& b){
    return a.name < b.name;
}

int main(){
    list<Node> arr;
    
    for(int i = 0; i < 5; i++){
        string name;
        cin >> name;
        arr.push_back(name);
    }

    arr.sort(compare);

    list<Node>::iterator it;
    for(it = arr.begin(); it != arr.end(); it++){
        cout << it->name << "\n";
    }
    return 0;
}

// https://wiserloner.tistory.com/306