#include <iostream>

using namespace std;

int main() {

    int n, i, menor, pos;
    menor = 0;
    pos = 0;
    cin >> n;
    int vctx[n];
    for(i = 0; i < n; i++){
        cin >> vctx[i];
        if(i == 0){
            menor = vctx[i];
            pos = i;
        } else if(vctx[i] < menor){
            menor = vctx[i];
            pos = i;
        }

    }
    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << pos << endl;

    return 0;
}
