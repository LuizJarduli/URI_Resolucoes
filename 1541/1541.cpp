#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int a,b,c,aux;
    aux = 0;
    cin >> a;
    while(a != 0){
        cin >> b >> c;
        aux = sqrt((a*b*100)/c);
        cout << aux << endl;
        cin >> a;
    }
    return 0;
}
