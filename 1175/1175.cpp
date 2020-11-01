#include <iostream>

using namespace std;

int main() {

    int n[20], i, val;
    for(i  = 0; i < 20; i++){
        cin >> n[i];
    }
    for(i = 0 ; i < 10; i++){
        val = n[i];
        n[i] = n[19-i];
        n[19-i] = val;

    }
    for(i = 0; i < 20; i++){
        cout << "N[" << i << "] = " << n[i] << endl;
    }


    return 0;
}
