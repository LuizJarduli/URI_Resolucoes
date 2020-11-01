#include <iostream>

using namespace std;

int main() {

    int n,i=0 ,pares = 0;
    for(i=0; i<5 ;i++){
        cin >> n;
        if(n % 2 == 0){
            pares++;
        }
    }
    cout << pares << " valores pares" << endl;

    return 0;
}
