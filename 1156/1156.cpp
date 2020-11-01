#include <iostream>

using namespace std;

int main() {

    double s, total;
    int i;
    s = 3;
    total = 1;
    for(i = 2; s <= 39; i*=2){
        total = total + (s/i);
        s+=2;
    }
    cout.precision(2);
    cout << fixed << total << endl;
    return 0;
}

