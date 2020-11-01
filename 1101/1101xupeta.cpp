#include <iostream>

using namespace std;

int main() {

    int m, n , soma, i , j;
    soma = 0;
    while(cin >> m >> n){
        if(n <= 0 || m <=0)break;
        if( m < n){
            for(i = m; i <= n; i++){
                cout << i << " ";
                soma += i;
            }
            cout << "Sum=" << soma << endl;
            soma = 0;
        } else {
            for(i = n; i <= m; i++){
                cout << i << " ";
                soma += i;
            }
            cout << "Sum=" << soma << endl;
            soma = 0;
        }

    }

    return 0;
}

