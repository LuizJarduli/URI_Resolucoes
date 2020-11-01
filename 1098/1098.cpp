#include <iostream>

using namespace std;

int main() {

    double I, J;
    I = 0;
    J = 1;
    while(I <= 2){
        cout << "I=" << I << " J=" << J << endl;
        J+=1;
        if(J > 3 + 0.2 + I || J > 6 + 0.2 + I){
            I += 0.2;
            J = 1 + I;
        }

    }

    return 0;
}



