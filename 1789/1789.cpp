#include <iostream>

using namespace std;

int main() {

    int l, gl, nivel, maiorNivel, i;
    nivel = 0;
    maiorNivel = 0;
    while(cin >> l){
        for(i = 0; i < l; i++){
            cin >> gl;
            if(gl < 10) nivel = 1;
            else if(gl >=10 && gl < 20) nivel = 2;
            else nivel = 3;
            if(nivel > maiorNivel) maiorNivel = nivel;
        }
        cout << maiorNivel << endl;
        maiorNivel = 0;
    }

    return 0;
}
