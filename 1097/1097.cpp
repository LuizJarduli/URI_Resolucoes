#include <iostream>

using namespace std;

int main() {

    int I, J;
    I = 1;
    J = 7;
    while(I <= 9){
        cout << "I=" << I << " J=" << J << endl;
        J--;
        if(J < (I + 6) - 2){
            I +=2;
            J = I + 6;
        }

    }

    return 0;
}


