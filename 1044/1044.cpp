#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int a,b,operacao;
    string resultado;
    operacao = 0;
    cin >> a >> b;
    operacao = a > b ? a % b : b % a;
    resultado = operacao == 0 ? "Sao Multiplos" : "Nao sao Multiplos";
    cout << resultado << endl;
    return 0;
}
