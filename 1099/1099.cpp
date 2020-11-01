#include <iostream>

using namespace std;

int main() {

    int n, soma, i, j;
    soma = 0;
    cin >> n;
    int x[n], y[n];
    for(i =0 ; i < n; i++){
        cin >> x[i] >> y[i];
    }
    for(i = 0 ; i < n; i++){
        if(x[i] < y[i]){
            for(j = x[i] + 1 ; j < y[i] ; j++){
                if(j % 2 == 1){
                    soma += j;
                }
            }
        } else {
            for(j = y[i] + 1 ; j < x[i] ; j++){
                if(j % 2 == 1){
                    soma += j;
                }
            }
        }
        cout << soma << endl;
        soma = 0;
    }

    return 0;
}
