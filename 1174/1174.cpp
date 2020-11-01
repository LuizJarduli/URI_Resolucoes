#include <iostream>

using namespace std;

int main() {

    double a[100];
    int i;
    for(i =0; i< 100; i++){
        cin >> a[i];
    }
    cout.precision(1);
    for(i = 0; i < 100; i++){
        if(a[i] <= 10)cout << fixed <<  "A[" << i << "] = " << a[i] << endl;
    }
    return 0;
}
