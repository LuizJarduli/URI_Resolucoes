#include <iostream>

using namespace std;

int main() {

    int x , y;
    while(1){
        cin >> x >> y;
        if(x == y){
            break;
        }
        if(x < y){
            cout << "Crescente" << endl;
        } else {
            cout << "Decrescente" << endl;
        }
    }

    return 0;
}
