#include <iostream>

using namespace std;

int main() {

    int n, x, impar, i, j;
    impar = 0;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> x;
        for(j = 1; j <= x; j++){
           if(x % j == 0){
                impar++;
           }
        }
        if(impar == 2) cout << x << " eh primo" << endl;
        else cout << x << " nao eh primo" << endl;
        impar = 0;

    }
    return 0;
}

