#include<iostream>

using namespace std;

int main(){
    int count;

    scanf("%d", &count);

    for(int i = 0; i < count; i++){
        int vertices, indices, hedron;

        scanf("%d %d", &vertices, &indices);

        hedron = 2 + indices - vertices;

        printf("%d\n", hedron);

    }
    return 0;

}