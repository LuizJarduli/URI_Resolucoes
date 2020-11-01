#include <iostream>

using namespace std;

int main() {

    double n , media, i, acumulativa, x;
    media = 0;
    acumulativa = 0;
    i = 0;
    x = 0;
    cout.precision(2);
    while(i < 2){
        cin >> n;
        if(n < 0 || n > 10){
            cout << "nota invalida" << endl;
        } else{
            acumulativa = acumulativa + n;
            i++;
        }
        if(i == 2){
            media = acumulativa / 2.0;
            cout << fixed << "media = " << media << endl;
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> x;
            while(x < 1 || x > 2){
                cout << "novo calculo (1-sim 2-nao)" << endl;
                cin >> x;
            }
            if(x == 2)break;
            else{
                i = 0;
                media = 0;
                acumulativa = 0;
            }

        }
    }

    return 0;
}

