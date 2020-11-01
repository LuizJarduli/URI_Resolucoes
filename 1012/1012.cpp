#include <iostream>
#include <math.h>
#define pi 3.14159

using namespace std;
int main(){

    double a,b,c;
    cin >> a >> b >> c;
    cout.precision(3);
    cout << "TRIANGULO: " << fixed << (a*c)/2.0 << endl << "CIRCULO: " << fixed << pi * pow(c,2) << endl << "TRAPEZIO: " << fixed << ((a+b) * c)/2.0 << endl << "QUADRADO: " << fixed << pow(b,2) << endl << "RETANGULO: " << fixed << a*b << endl;
    return 0;
}
