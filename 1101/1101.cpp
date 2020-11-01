#include <iostream>
#include <vector>

using namespace std;

int main() {

    int m, n , soma, i , j , ponteiro;
    soma = 0;
    vector<int> x;
    vector<int> seq;
    while(n > 0 || m > 0){
        cin >> m >> n;
        x.push_back(m);
        x.push_back(n);
    }
    for(i = 0 ; i < x.size() ; i+=2){
        if(x.operator[](i + 1) == 0){
            break;
        }
        if(x.operator[](i) < x.operator[](i + 1)){
            seq.clear();
            ponteiro = 0;
            for(j = x.operator[](i) ; j <= x.operator[](i + 1) ; j++){
                seq.push_back(j);
                soma += j;
                cout << seq.operator[](ponteiro) << " ";
                ponteiro++;
            }
            cout << "Sum=" << soma << endl;
            soma = 0;
        } else {
            seq.clear();
            ponteiro = 0;
            for(j = x.operator[](i + 1) ; j <= x.operator[](i) ; j++){
                seq.push_back(j);
                soma += j;
                cout << seq.operator[](ponteiro) << " ";
                ponteiro++;
            }
            cout << "Sum=" << soma << endl;
            soma = 0;
        }
    }
    return 0;
}
