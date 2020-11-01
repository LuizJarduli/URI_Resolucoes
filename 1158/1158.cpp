#include <iostream>

using namespace std;

int main() {

    int n ,x, y,i, soma, qtdImpar;
    soma = 0;
    qtdImpar = 0;
    cin >> n;
    for(i = 0; i <n ;i++){
        cin >> x >> y;
        while(qtdImpar < y){
            if(x % 2 == 1 || x % 2 == -1){
                soma+=x;
                qtdImpar++;
            }
            x++;
        }
        cout << soma << endl;
        soma = 0;
        qtdImpar = 0;
    }

    return 0;
}
