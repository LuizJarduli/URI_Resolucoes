#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    double a,b,c,maior,menor,meio;
    string triangulo;
    cin >> a >> b >> c;
    maior = a > b ? a > c ? a : c : b > c ? b : c;
    if(maior == b)
        b = a;
    if(maior == c)
        c = a;
    a = maior;
    if(a >= (b+c))
        cout << "NAO FORMA TRIANGULO" << endl;
    else{
        if(a*a == b*b + c*c)
            cout << "TRIANGULO RETANGULO" << endl;
        if(a*a > (b*b + c*c))
            cout << "TRIANGULO OBTUSANGULO" << endl;
        if(a*a < b*b + c*c)
            cout << "TRIANGULO ACUTANGULO" << endl;
        if(a == b && a == c && b == c)
            cout << "TRIANGULO EQUILATERO" << endl;
        if((a == b && a != c) || (a == c && a !=b) || (b == c && b != a))
            cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}
