#include <iostream>

using namespace std;

int main() {

    int a, n, soma, i;
    soma = 0;
    n = 0;
    cin >> a;
    while(n <= 0){
        cin >> n;
        if(n > 0){
            break;
        }
    }
    for(i = 0 ; i < n; i++){
        soma += a + i;
    }
    cout << soma << endl;
    return 0;
}
