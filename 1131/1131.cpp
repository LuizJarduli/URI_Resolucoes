#include <iostream>

using namespace std;

int main() {

    int i, g, replay, grenais, qtdI, qtdG, qtdE;
    grenais = 0;
    qtdI = 0;
    qtdG = 0;
    qtdE = 0;
    replay = 0;
    do{
        cin >> i >> g;
        if(i > g)qtdI++;
        else if(g > i)qtdG++;
        else qtdE++;
        grenais++;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> replay;
    }while(replay == 1);
    cout << grenais << " grenais" << endl;
    cout << "Inter:" << qtdI << endl;
    cout << "Gremio:" << qtdG << endl;
    cout << "Empates:" << qtdE << endl;
    if(qtdI > qtdG){
        cout << "Inter venceu mais" << endl;
    } else if(qtdG > qtdI){
        cout << "Gremio venceu mais" << endl;
    } else{
        cout << "Nao houve vencedor" << endl;
    }
    return 0;
}
