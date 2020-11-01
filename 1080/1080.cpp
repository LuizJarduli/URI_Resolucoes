#include <iostream>

using namespace std;

int main() {

    int valores[100], i, pos, maior;
    maior = 0;
    pos = 0;
    for(i=0; i < 100 ; i++){
        cin >> valores[i];
    }
    for(i =0 ; i < 100 ; i++){
        if(valores[i] > maior){
            maior = valores[i];
            pos = i+1;
        }
    }
    cout << maior << endl;
    cout << pos << endl;
    return 0;
}
