#include <iostream>

using namespace std;

int main() {

    int64_t valFib[61], t, i, val;
    valFib[0] = 0;
    valFib[1] = 1;
    for(i = 2; i <=60; i++){
        valFib[i] = valFib[i-1] + valFib[i-2];
    }
    cin >> t;
    for(i = 0; i < t; i++){
        cin >> val;
        cout << "Fib(" << val << ") = " << valFib[val] << endl;
    }


    return 0;
}
