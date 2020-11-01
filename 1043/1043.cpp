#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    double a,b,c, resultado;
    string operacao;
    cin >> a >> b >> c;
    operacao = a > (abs(b-c) && a < b + c) && (b > abs (a-c) && b < a+c) && (c > abs(a-b) && c < a+b) ? "Perimetro" : "Area";
    resultado = operacao == "Perimetro" ? a + b + c : ((a + b)*c)/2;
    cout.precision(1);
    cout << fixed << operacao << " = " << resultado << endl;
    return 0;
}
