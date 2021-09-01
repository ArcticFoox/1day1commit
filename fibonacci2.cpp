#include <iostream>
using namespace std;

int n, t1 = 0, t2 = 1, nextTerm = 0;

void loop(){
    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << ", ";
    }
}

int recursive(int x){
    if((x==1)||(x==0)) {
      return x;
   }else {
     return(recursive(x-1)+recursive(x-2));
   }
}

int main() {

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    loop();

    cout << '\n';

    for(int i = 0; i < n; i++){
        cout << " " << recursive(i);
    }
    

    return 0;
}