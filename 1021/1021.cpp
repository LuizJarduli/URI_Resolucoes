#include <iostream>

using namespace std;

int main() {

    double notaFloat, qtdnotas, qtdmoedas;
    int nota;
    qtdnotas = 0;
    cin >> notaFloat;
    nota = int(notaFloat);
    qtdnotas = nota / 100;
    cout << "NOTAS:" << endl << qtdnotas << " nota(s) de R$ 100.00" << endl;
    nota = nota % 100;
    qtdnotas = nota / 50;
    cout << qtdnotas << " nota(s) de R$ 50.00" << endl;
    nota = nota % 50;
    qtdnotas = nota / 20;
    cout << qtdnotas << " nota(s) de R$ 20.00" << endl;
    nota = nota % 20;
    qtdnotas = nota / 10;
    cout << qtdnotas << " nota(s) de R$ 10.00" << endl;
    nota = nota % 10;
    qtdnotas = nota / 5;
    cout << qtdnotas << " nota(s) de R$ 5.00" << endl;
    nota = nota % 5;
    qtdnotas = nota / 2;
    cout << qtdnotas << " nota(s) de R$ 2.00" << endl;
    nota = nota % 2;
    qtdmoedas = nota / 1;
    cout << "MOEDAS:" << endl;
    cout << qtdmoedas << " moeda(s) de R$ 1.00" << endl;
    nota = int(notaFloat);
    notaFloat = (notaFloat - nota) * 100;
    nota = int(notaFloat);
    qtdmoedas = nota / 50;
    cout << qtdmoedas << " moeda(s) de R$ 0.50" << endl;
    nota = nota % 50;
    qtdmoedas = nota / 25;
    cout << qtdmoedas << " moeda(s) de R$ 0.25" << endl;
    nota = nota % 25;
    qtdmoedas = nota / 10;
    cout << qtdmoedas << " moeda(s) de R$ 0.10" << endl;
    nota = nota % 10;
    qtdmoedas = nota / 5;
    cout << qtdmoedas << " moeda(s) de R$ 0.05" << endl;
    nota = nota % 5;
    qtdmoedas = nota / 1;
    cout << qtdmoedas << " moeda(s) de R$ 0.01" << endl;
    return 0;
}

