#include <iostream>

using namespace std;

int main() {

    int n, soma, qtdPar;
    soma = 0;
    qtdPar = 0;
    while(cin >> n){
        if(n == 0)break;
        while(qtdPar < 5){
            if(n % 2 == 0){
                soma+=n;
                qtdPar++;
            }
            n++;
        }
        cout << soma << endl;
        soma = 0;
        qtdPar = 0;
    }


    return 0;
}

