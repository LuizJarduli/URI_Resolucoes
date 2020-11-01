#include <iostream>

using namespace std;

int main() {

    int n ,x ,y, i;
    double resultado;
    cin >> n;
    cout.precision(1);
    for(i = 0; i <n ; i++){
        cin >> x >> y;
        if(y == 0){
            cout << "divisao impossivel" << endl;
        } else {
            resultado = (double)x / y;
            cout << fixed << resultado << endl;

        }
    }


    return 0;
}
