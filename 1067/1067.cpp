#include <iostream>

using namespace std;

int main() {

    int x, i=0;
    cin >> x;
    for(i = 0; i <= x; i++){
        if(i % 2 == 1){
            cout << i << endl;
        }
    }

    return 0;
}
