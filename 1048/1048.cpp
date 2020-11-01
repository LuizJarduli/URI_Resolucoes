#include <iostream>

using namespace std;

int main() {

    double sal, salfinal, reajuste, percentual;
    cin >> sal;
    if(sal >=0 && sal <= 400){
        percentual = 15;
        reajuste = sal * 0.15;
        salfinal = reajuste + sal;
    } else if(sal > 400 && sal <= 800){
        percentual = 12;
        reajuste = sal * 0.12;
        salfinal = reajuste + sal;
    } else if(sal > 800 && sal <= 1200){
        percentual = 10;
        reajuste = sal * 0.10;
        salfinal = reajuste + sal;
    } else if(sal > 1200 && sal <= 2000){
        percentual = 7;
        reajuste = sal * 0.07;
        salfinal = reajuste + sal;
    } else {
        percentual = 4;
        reajuste = sal * 0.04;
        salfinal = reajuste + sal;
    }
    cout.precision(2);
    cout << fixed;
    cout << "Novo salario: " << salfinal << endl;
    cout << "Reajuste ganho: " << reajuste << endl;
    cout.precision(0);
    cout << fixed << "Em percentual: " << percentual << " %" << endl;

    return 0;
}
