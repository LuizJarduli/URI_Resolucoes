#include <iostream>

using namespace std;

int main() {

    int n , res, i;
    i = 0;
    res = 0;
    cin >> n;
    for(i = 1; i <=10 ; i++){
        res = i * n;
        cout << i << " x " << n << " = " << res << endl;
    }

    return 0;
}
