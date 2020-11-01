#include <iostream>

using namespace std;

int main() {

    double x,y;
    string quadrante;
    cin >> x >> y;
    quadrante = x == 0.0 && y == 0.0 ? "Origem" :  x > 0 && y > 0 ? "Q1" : x > 0 && y < 0 ? "Q4" : x < 0 && y > 0 ? "Q2" : x < 0 && y < 0 ? "Q3" : y == 0 && x != 0 ? "Eixo X" : "Eixo Y";
    cout << quadrante << endl;

    return 0;
}
