#include <iostream>

using namespace std;

int main() {

    int i, j, med;
    string op;
    med = 0;
    double matx[12][12], result, val;
    result = 0;
    cin >> op;
    for(i = 11; i >= 0; i--){
        for(j = 11; j >= 0; j--){
            cin >> val;
            if(j < 11 - i && j > i){
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







