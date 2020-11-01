#include <iostream>

using namespace std;

int main() {

    int t, valores[1000], i, j;
    j=0;
    cin >> t;
    for(i = 0; i <1000;i++){
        if(j == t){
            j=0;
            valores[i] = j;
        } else{
            valores[i] = j;
        }
        cout << "N[" << i << "] = " << valores[i] << endl;
        j++;
    }

    return 0;
}
