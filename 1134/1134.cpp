#include <iostream>

using namespace std;

int main() {

    int x, qtdAlc, qtdDies, qtdGas;
    qtdAlc = 0;
    qtdDies = 0;
    qtdGas = 0;
    while(cin >> x){
        if(x == 4){
            break;
        } else {
            switch(x){
                case 1:
                    qtdAlc++;
                    break;
                case 2:
                    qtdDies++;
                    break;
                case 3:
                    qtdGas++;
                    break;
            }
        }
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << qtdAlc << endl;
    cout << "Gasolina: " << qtdDies << endl;
    cout << "Diesel: " << qtdGas << endl;

    return 0;
}
