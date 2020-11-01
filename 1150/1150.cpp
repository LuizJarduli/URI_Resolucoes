#include <iostream>

using namespace std;

int main() {

    int x, z, i, qtdsoma;
    qtdsoma = 0;
    i = 1;
    cin >> x;
    while(cin >> z){
        if(z > x)break;
    }
    qtdsoma = x;
    while(qtdsoma <= z){
        qtdsoma += x + i;
        i++;
    }
    cout << i << endl;
    return 0;
}
