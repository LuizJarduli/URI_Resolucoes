#include <iostream>

using namespace std;

int main(){

    int numpeca, qtdpeca;
    double valpeca, total;
    total = 0;
    cin >> numpeca >> qtdpeca >> valpeca;
    total = total + (qtdpeca * valpeca);
    cin >> numpeca >> qtdpeca >> valpeca;
    total = total + (qtdpeca * valpeca);
    cout.precision(2);
    cout << "VALOR A PAGAR: R$ " << fixed << total << endl;
    return 0;
}
