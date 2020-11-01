#include <iostream>

using namespace std;

int main() {

    double num;
    string intervalo;
    cin >> num;
    intervalo = num >= 0 && num <=25 ? "Intervalo [0,25]" : num > 25 && num <= 50 ? "Intervalo (25,50]" : num > 50 && num <= 75 ? "Intervalo (50,75]" : num > 75 && num <= 100 ? "Intervalo (75,100]" : "Fora de intervalo";
    cout << intervalo << endl;

    return 0;
}
