#include <iostream>

using namespace std;

int main() {

    int dias, meses, anos;
    cin >> dias;
    meses = dias / 30 >= 12 ? (dias % 365) / 30 : dias / 30;
    anos = dias / 365;
    dias = (dias % 365) % 30;
    cout << anos << " ano(s)" << endl << meses << " mes(es)" << endl << dias << " dia(s)" << endl;
    return 0;
}
