#include <iostream>

using namespace std;

int main() {

    int diaI, diaF, horaI, horaF, minI, minF, segI, segF, hora, minuto, segundo, dias;
    dias = 0;
    hora = 0;
    segundo = 0;
    minuto = 0;
    string p1, p2, p3;
    cin >> p3 >> diaI;
    cin >> horaI >> p1 >> minI >> p2 >>  segI;
    cin >> p3 >> diaF;
    cin >> horaF >> p1 >> minF >> p2 >>  segF;
    if(segI <= segF){
        segundo = segF - segI;
    } else {
        minuto--;
        segundo = 60 - (segI - segF);
    }
    if(minI <= minF){
        minuto += minF - minI;
    } else {
        hora--;
        minuto += 60 - (minI - minF);
    }
    if(horaI <= horaF){
        hora += horaF - horaI;
    } else {
        dias--;
        hora += 24 - (horaI - horaF);
    }
    if(diaI <= diaF){
        dias += diaF - diaI;
    } else {
        dias = 0;
    }
    cout << dias << " dia(S)" << endl;
    cout << hora << " hora(S)" << endl;
    cout << minuto << " minuto(S)" << endl;
    cout << segundo << " segundo(S)" << endl;


    return 0;
}
