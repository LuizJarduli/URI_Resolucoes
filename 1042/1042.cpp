#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int n1, n2, n3, maior, menor;
    cin >> n1 >> n2 >> n3;
    maior = (n1 + n2 + abs(n1 - n2))/2 > n3 ? (n1 + n2 + abs(n1 - n2))/2 : n3;
    menor = n1 < n2 ? n1 < n3 ? n1 : n3 : n2 < n3 ? n2 : n3;
    cout << menor << endl << (n1 != maior && n1 != menor ? n1 : n2 != maior && n2 != menor ? n2 : n3) << endl << maior << endl;
    cout << endl << n1 << endl << n2 << endl << n3 << endl;
    return 0;
}
