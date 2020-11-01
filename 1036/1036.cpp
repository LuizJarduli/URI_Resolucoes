#include <iostream>
#include <math.h>

using namespace std;
int main() {

    double a,b,c,delta,raiz, x1, x2;
    cin >> a >> b >> c;
    delta = b*b -4*a*c;
    if(delta < 0 || a == 0){
        cout << "Impossivel calcular" << endl;
    }
    else {
        raiz = sqrt(delta);
        x1 = (-b + raiz) / (2.0*a);
        x2 = (-b - raiz) / (2.0*a);
        cout.precision(5);
        cout << fixed <<  "R1 = " << x1 << endl << "R2 = " << x2 << endl;
    }
    return 0;
}
