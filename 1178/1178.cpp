#include <iostream>

using namespace std;

int main() {

    double x, val[100];
    int i;
    cin >> x;
    val[0] = x;
    for(i = 1; i < 100; i++){
        val[i] = val[i-1] / 2.0;
    }
    cout.precision(4);
    for(i = 0; i < 100; i++){
        cout << fixed << "N[" << i << "] = " << val[i] << endl;
    }

    return 0;
}
