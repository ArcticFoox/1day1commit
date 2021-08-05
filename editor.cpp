#include<iostream>
#include<List>
#include<string>

using namespace std;

int main(){
    string firinput;

    cin >> firinput;      //check the different between scanf and cin

    list<char> container(firinput.begin(), firinput.end());    // it work when use cin but doesn't work when use scanf
    list<char>::iterator cur = container.end();
    
    int count;
    char n;
    scanf("%d", &count);

    for(int i = 0; i < count; i++){
        cin >> n;
        if (n == 'L' && cur != container.begin()) cur--;
		else if (n == 'D' && cur != container.end()) cur++;
		else if (n == 'B' && cur != container.begin()) cur = container.erase(--cur);
		else if (n == 'P') {
			cin >> n;
			container.insert(cur, n);
        }
    }

    for(cur = container.begin(); cur != container.end(); cur++){
        cout << *cur;
    }

    return 0;
}