#include<iostream>
using namespace std;

int main(){
    int c1, b1, p1;
    int c2, b2, p2;
    int sum = 0;

    cin >> c1 >> b1 >> p1;
    cin >> c2 >> b2 >> p2;

    if(c1 - c2 < 0){
        sum += -(c1 - c2);
    }

    if(b1 - b2 < 0){
        sum += -(b1 - b2);
    }

    if(p1 - p2 < 0){
        sum += -(p1 - p2);
    }

    cout << sum;
    return 0;

    //int a[3],r,n;
    //scanf("%d%d%d",&a[0],&a[1],&a[2]);
    //for(int i=0;i<3;i++){
        //scanf(" %d", &n);
        //r+=(a[i]>n?0:n-a[i]);
        //}
    //printf("%d",r);}

    //int a,b,c,d,e,f;scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    //printf("%d",max(d-a,0)+max(e-b,0)+max(f-c,0));  algorithm 사용하는 방법
}