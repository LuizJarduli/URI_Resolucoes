#include <iostream>

using namespace std;

int main() {

    double s, total;
    int i;
    s = 1;
    total = 1;
    for(i = 2; i <= 100; i++){
        total = total + (s/i);
    }
    cout.precision(2);
    cout << fixed << total << endl;
    return 0;
}
