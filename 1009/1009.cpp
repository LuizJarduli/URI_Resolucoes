#include <iostream>

using namespace std;

int main(){

    string nome;
    double salfixo, totalvendas, salfinal;
    salfinal = 0;
    cin >> nome;
    cin >> salfixo;
    cin >> totalvendas;
    salfinal = salfixo + totalvendas * 0.15;
    cout.precision(2);
    cout << "TOTAL = R$ " << fixed <<  salfinal << endl;

    return 0;
}
