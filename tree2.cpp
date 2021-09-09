#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

typedef struct {
    char left;
    char right;
} node;
node tree[27];

void preorder(char node){
    if(node == '.') return;
    cout << node;

    preorder(tree[node].left);
    preorder(tree[node].right);
}

void inorder(char node){
    if(node == '.') return;
    
    inorder(tree[node].left);
    cout << node;
    inorder(tree[node].right);
}

void postorder(char node){
    if(node == '.') return;
    
    postorder(tree[node].left);
    postorder(tree[node].right);
    cout << node;
}

int main(){
    int n;
    cin >> n;
    char root, l, r;
    for(int i = 0; i < n; i++){
        cin >> root >> l >> r;
        tree[root].left = l;
        tree[root].right = r;
    }

    preorder('A');
    cout << '\n';
    inorder('A');
    cout << '\n';
    postorder('A');
    cout << '\n';

    return 0;
}