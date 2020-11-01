#include <iostream>

using namespace std;

int main() {

    int aux , i, j, n;
    aux = 0;
    while(cin >> n){
        for(i = 0;i < n; i++){
            for(j = 0; j <n; j++){
                if(j >= n/3 && j <= (n-1)-(n/3) && i >= n/3 && i <= (n-1)-(n/3))aux =1;
                else if(i == j ){
                    if(i == n/3 || j == n/3){
                        aux = 1;
                    } else {
                        aux = 2;
                    }
                }
                else if(j == (n-1)-i){
                    if(j == n/3 || i == n/3){
                        aux = 1;
                    } else {
                        aux = 3;
                    }
                }
                else {
                    aux = 0;
                }
                if(i == (n-1)/2 && j == (n-1)/2)aux = 4;
                cout << aux;

            }
            cout <<endl;
        }
        cout << endl;
    }

    return 0;
}
