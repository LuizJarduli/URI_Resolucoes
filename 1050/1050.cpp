#include <iostream>

using namespace std;

int main() {

    int ddd;
    string retorno;
    cin >> ddd;
    switch(ddd){
        case 61:
            retorno = "Brasilia";
            break;
        case 71:
            retorno = "Salvador";
            break;
        case 11:
            retorno = "Sao Paulo";
            break;
        case 21:
            retorno = "Rio de Janeiro";
            break;
        case 32:
            retorno = "Juiz de Fora";
            break;
        case 19:
            retorno = "Campinas";
            break;
        case 27:
            retorno = "Vitoria";
            break;
        case 31:
            retorno = "Belo Horizonte";
            break;
        default:
            retorno = "DDD nao cadastrado";
            break;

    }
    cout << retorno << endl;
    return 0;
}
