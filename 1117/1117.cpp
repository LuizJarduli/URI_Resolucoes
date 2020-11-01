#include <iostream>

using namespace std;

int main() {

    double n , media, i, acumulativa;
    media = 0;
    acumulativa = 0;
    i = 0;
    cout.precision(2);
    while(i < 2){
        cin >> n;
        if(n < 0 || n > 10){
            cout << "nota invalida" << endl;
        } else{
            acumulativa = acumulativa + n;
            i++;
        }
    }
    media = acumulativa / 2.0;
    cout << fixed << "media = " << media << endl;

    return 0;
}
