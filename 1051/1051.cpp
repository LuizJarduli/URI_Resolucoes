#include <iostream>

using namespace std;

int main() {

    float renda, imposto;
    cin >> renda;
    if(renda <= 2000){
        cout << "Isento" << endl;
    } else {
        if(renda <= 3000){
            imposto = (renda - 2000) * 0.08;
        } else if(renda <= 4500){
            imposto = ((renda - 3000.00) * 0.18) + ((3000 - 2000) * 0.08);
        } else {
            imposto = ((3000 - 2000) * 0.08) + ((4500 - 3000) * 0.18) + ((renda - 4500) * 0.28);
        }
        cout.precision(2);
        cout << fixed << "R$ " << imposto << endl;
    }

    return 0;
}
