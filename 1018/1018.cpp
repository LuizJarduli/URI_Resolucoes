#include <iostream>

using namespace std;

int main() {

    int nota, qtdnotas;
    qtdnotas = 0;
    cin >> nota;
    qtdnotas = nota / 100;
    cout << nota << endl << qtdnotas << " nota(s) de R$ 100,00" << endl;
    nota = nota % 100;
    qtdnotas = nota / 50;
    cout << qtdnotas << " nota(s) de R$ 50,00" << endl;
    nota = nota % 50;
    qtdnotas = nota / 20;
    cout << qtdnotas << " nota(s) de R$ 20,00" << endl;
    nota = nota % 20;
    qtdnotas = nota / 10;
    cout << qtdnotas << " nota(s) de R$ 10,00" << endl;
    nota = nota % 10;
    qtdnotas = nota / 5;
    cout << qtdnotas << " nota(s) de R$ 5,00" << endl;
    nota = nota % 5;
    qtdnotas = nota / 2;
    cout << qtdnotas << " nota(s) de R$ 2,00" << endl;
    nota = nota % 2;
    qtdnotas = nota / 1;
    cout << qtdnotas << " nota(s) de R$ 1,00" << endl;
    return 0;
}
