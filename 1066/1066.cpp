#include <iostream>

using namespace std;

int main() {

    int num,i, qtdPar = 0, qtdImpar = 0, qtdPos = 0, qtdNeg = 0;
    for(i = 0; i < 5; i++){
        cin >> num;
        if(num % 2 == 0){
            qtdPar++;
        } else {
            qtdImpar++;
        }
        if(num > 0){
            qtdPos++;
        } else if(num < 0){
            qtdNeg++;
        }
    }
    cout << qtdPar << " valor(es) par(es)" << endl;
    cout << qtdImpar << " valor(es) impar(es)" << endl;
    cout << qtdPos << " valor(es) positivo(s)" << endl;
    cout << qtdNeg << " valor(es) negativo(s)" << endl;

    return 0;
}
