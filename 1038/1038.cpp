#include <iostream>

using namespace std;

int main() {

    int numItem, qtd;
    double total;
    total = 0;
    cin >> numItem >> qtd;
    switch(numItem){
        case 1:
            total = qtd * 4.0;
            break;
         case 2:
            total = qtd * 4.5;
            break;
         case 3:
            total = qtd * 5.0;
            break;
         case 4:
            total = qtd * 2.0;
            break;
         case 5:
            total = qtd * 1.5;
            break;
    }
    cout.precision(2);
    cout << fixed << "Total: R$ " << total << endl;

    return 0;
}
