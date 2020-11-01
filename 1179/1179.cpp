#include <iostream>

using namespace std;

int main() {

    int n, par[5], impar[5], i, j1, j2, k;
    j1 = 0;
    j2 = 0;
    for(i = 0; i < 15; i++){
        cin >> n;
        if(n % 2 == 1 || n % 2 == -1){
            if(j1 == 4){
                impar[j1] = n;
                for(k = 0; k < 5; k++){
                    cout << "impar[" << k << "] = " << impar[k] << endl;
                    impar[k] = 0;
                }
                j1 = 0;
            } else {
                impar[j1] = n;
                j1++;
            }
        } else {
             if(j2 == 4){
                par[j2] = n;
                for(k = 0; k < 5; k++){
                    cout << "par[" << k << "] = " << par[k] << endl;
                    par[k] = 0;
                }
                j2 = 0;
            } else {
                par[j2] = n;
                j2++;
            }
        }
    }
    for(i = 0; i < 5; i++){
        if(impar[i] != 0)cout << "impar[" << i << "] = " << impar[i] << endl;
    }
    for(i = 0; i < 5; i++){
        if(par[i] != 0)cout << "par[" << i << "] = " << par[i] << endl;
    }


    return 0;
}

