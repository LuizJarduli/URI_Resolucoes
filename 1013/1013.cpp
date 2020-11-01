#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int a,b,c , maior;
    cin >> a >> b >> c;
    maior = (a+b+abs(a-b))/2;
    maior = maior > c ? maior : c;
    cout << maior << " eh o maior" << endl;
    return 0;
}
