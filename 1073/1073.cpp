#include <iostream>

using namespace std;

int main() {

    int n, quadrado=0, i;
    cin >> n;
    for(i = 1; i <=n; i++){
        if(i % 2 == 0){
            quadrado = i*i;
            cout << i << "^2 = " << quadrado << endl;
        }
    }

    return 0;
}
