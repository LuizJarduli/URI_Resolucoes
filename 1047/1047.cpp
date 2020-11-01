#include <iostream>

using namespace std;

int main() {

    int horaI, horaF, minI, minF, resultado, minutos, horas;
    cin >> horaI >> minI >> horaF >> minF;
    resultado = (horaI * 60 + minI) >= (horaF * 60 + minF) ? (24*60 - (horaI * 60 + minI)) + (horaF * 60 + minF) : (horaF * 60 + minF) - (horaI * 60 + minI);
    horas = resultado / 60;
    minutos = resultado % 60;
    cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;
    return 0;
}

