#include <iostream>

using namespace std;

int main() {

    int n, qtdC, qtdR, qtdS,i;
    double pctC, pctR, pctS, qtdtotal;
    qtdC = 0;
    qtdR = 0;
    qtdS = 0;
    qtdtotal = 0;
    pctC = 0;
    pctR = 0;
    pctS = 0;
    cin >> n;
    int valores[n];
    char tipo[n];
    for(i = 0; i < n; i++){
        cin >> valores[i] >> tipo[i];
    }
    for(i = 0; i < n; i++){
        if(tipo[i] == 'C'){
            qtdC += valores[i];
        } else if(tipo[i] == 'R'){
            qtdR += valores[i];
        } else if(tipo[i] == 'S'){
            qtdS += valores[i];
        }
    }
    qtdtotal = qtdC + qtdR + qtdS;
    pctC = (qtdC * 100) / qtdtotal;
    pctR = (qtdR * 100) / qtdtotal;
    pctS = (qtdS * 100) / qtdtotal;

    cout << "Total: " << qtdtotal << " cobaias" << endl;
    cout << "Total de coelhos: " << qtdC << endl;
    cout << "Total de ratos: " << qtdR << endl;
    cout << "Total de sapos: " << qtdS << endl;
    cout.precision(2);
    cout << fixed <<"Percentual de coelhos: " << pctC << " %" <<  endl;
    cout << fixed <<"Percentual de ratos: " << pctR << " %" << endl;
    cout << fixed <<"Percentual de sapos: " << pctS << " %" << endl;


    return 0;
}
