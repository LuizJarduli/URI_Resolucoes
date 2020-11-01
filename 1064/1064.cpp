#include <iostream>

using namespace std;

int main() {

    float num, media,qtd;
    int positivos = 0, i= 0;
    media = 0;
    qtd = 0;
    for(i = 0; i < 6; i++){
        cin >> num;
        if(num > 0){
            positivos++;
            qtd += num;
        }
    }
    media = qtd/positivos;
    cout << positivos << " valores positivos" << endl;
    cout.precision(1);
    cout << fixed << media << endl;

    return 0;
}
