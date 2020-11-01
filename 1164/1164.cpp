#include <iostream>

using namespace std;

int main() {

    int n, x, soma, i, j;
    soma = 0;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> x;
        for(j = 1; j < x; j++){
            if(x % j == 0)soma+=j;
        }
        if(soma == x){
            cout << x << " eh perfeito" << endl;
        } else {
             cout << x << " nao eh perfeito" << endl;
        }
        soma = 0;

    }
    return 0;
}
