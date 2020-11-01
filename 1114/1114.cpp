
#include <iostream>

using namespace std;

int main() {

    int senha = 2002;
    while(cin >> senha){
        if(senha == 2002){
            cout << "Acesso Permitido" << endl;
            break;
        }
        else{
            cout << "Senha Invalida" << endl;
        }
    }
    return 0;
}
