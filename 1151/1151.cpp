#include <iostream>

using namespace std;

int main() {

    int n, i, fibAnt, fibDep, soma;
    fibAnt = 0;
    fibDep = 1;
    soma = 0;
    cin >> n;
    for(i = 1; i < n; i++){
        if(i == 1){
            cout << fibAnt << " " << fibDep;
        } else {
            soma = fibAnt + fibDep;
            fibAnt = fibDep;
            fibDep = soma;
            cout << " " << soma;
        }
    }
    cout << endl;
    return 0;
}
