#include <iostream>

using namespace std;

int main() {

    double n1,n2,n3,n4, media, nexame;
    string situacao;
    media = 0;
    nexame = 0;
    cin >> n1 >> n2 >> n3 >> n4;
    media = (n1*2 + n2*3 + n3*4 + n4*1)/10;
    situacao = media >=7.0 ? "Aluno aprovado." : media >=5.0 && media <=6.9 ? "Aluno em exame." : "Aluno reprovado.";
    cout.precision(1);
    if(situacao == "Aluno em exame."){
        cin >> nexame;
        cout << fixed << "Media: " << media << endl << situacao << endl;
        media = (media + nexame) / 2.0;
        situacao = media >= 5.0 ? "Aluno aprovado." : "Aluno reprovado.";
        cout << fixed <<  "Nota do exame: " << nexame << endl << situacao << endl << "Media final: " << media << endl;
    } else{
        cout << fixed << "Media: " << media << endl << situacao << endl;
    }
    return 0;
}
