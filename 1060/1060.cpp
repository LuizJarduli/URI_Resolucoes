#include <iostream>
#define TAM 6

using namespace std;

int main() {

    double valores[6], totalpos;
    totalpos = 0;
    for(int i = 0; i < TAM; i++){
        cin >> valores[i];
    }
    for(int i = 0; i < TAM; i++){
        if(valores[i] > 0)
            totalpos++;
    }
    cout << totalpos << " valores positivos" << endl;

    return 0;
}
