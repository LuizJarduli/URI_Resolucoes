#include <iostream>

using namespace std;

int main() {

    int num, qtdin = 0, qtdout = 0,i, x;
    cin >> num;
    for(i=0; i < num;i++){
        cin >> x;
        if(x >= 10 && x <= 20){
            qtdin++;
        } else {
            qtdout++;
        }
    }
    cout << qtdin << " in" << endl;
    cout << qtdout << " out" << endl;
    return 0;
}
