#include <iostream>

using namespace std;

int main() {

    int i, j, med;
    string op;
    med = 0;
    double matx[12][12], result, val;
    result = 0;
    cin >> op;
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            cin >> val;
            if(j < 11 - i){
                matx[i][j] = val;
                result += matx[i][j];
                med++;
            }
        }
    }
    cout.precision(1);
    if(op == "S") cout << fixed << result << endl;
    else cout << fixed << result / med << endl;

    return 0;
}




