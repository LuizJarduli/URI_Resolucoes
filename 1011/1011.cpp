#include <iostream>
#include <math.h>
#define pi 3.14159

using namespace std;

int main(){

    double raio, volume;
    cin >> raio;
    volume = (4.0/3.0) * pi * pow(raio,3);
    cout.precision(3); // cout.precision() é o método para limitar casas decimais na impressão
    cout << "VOLUME = "<< fixed << volume << endl;
    return 0;
}
