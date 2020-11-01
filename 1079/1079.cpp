#include <iostream>

using namespace std;

int main() {

    int n,i;
    double media;
    i = 0;
    media = 0;
    cin >> n;
    double valores[n*3];
    for(i = 0; i < n*3 ; i+=3){
        cin >> valores[i] >> valores[i+1] >> valores[i+2];
    }
    cout.precision(1);
    for(i = 0; i < n*3;i+=3){
        media = (valores[i]*2 + valores[i+1]*3 + valores[i+2]*5) / 10.0;

        cout << fixed << media << endl;
    }

    return 0;
}
