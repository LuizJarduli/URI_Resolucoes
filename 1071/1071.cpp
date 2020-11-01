#include <iostream>

using namespace std;

int main() {

    int soma, x, y, i;
    soma = 0;
    cin >> x;
    cin >> y;
    if(x <= y){
        for(i = x+1; i < y; i++){
            if(i % 2 == 1 || i % 2 == -1){
                soma += i;
            }
        }
    } else {
        for(i = y+1; i < x; i++){
            if(i % 2 == 1 || i % 2 == -1){
                soma += i;
            }
        }
    }

    cout << soma << endl;


    return 0;
}
