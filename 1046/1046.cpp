#include <iostream>

using namespace std;

int main() {

    int horaI, horaF, resultado;
    cin >> horaI >> horaF;
    resultado = horaI >= horaF ? (24 - horaI) + horaF : horaF - horaI;
    cout << "O JOGO DUROU " << resultado << " HORA(S)" << endl;
    return 0;
}
