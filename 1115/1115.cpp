#include <iostream>

using namespace std;

int main() {

    int x, y;
    while(cin >> x >> y){
        if(x == 0 || y == 0){
            break;
        }
        if(x > 0){
            if(y < 0){
                cout << "quarto" << endl;
            } else {
                cout << "primeiro" << endl;
            }
        }
        else{
            if(y < 0){
                cout << "terceiro" << endl;
            } else {
                cout << "segundo" << endl;
            }
        }
    }

    return 0;
}
