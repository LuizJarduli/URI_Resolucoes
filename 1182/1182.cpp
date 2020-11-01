#include <iostream>

using namespace std;

int main() {

    int i, j, linha;
    string op;
    double matx[12][12], result, val;
    result = 0;
    cin >> linha;
    cin >> op;
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            cin >> val;
            if(j == linha){
                matx[i][j] = val;
                result += matx[i][j];
            } else {
                matx[i][j] = val;
            }
        }
    }
    cout.precision(1);
    if(op == "S") cout << fixed << result << endl;
    else cout << fixed << result / 12.0 << endl;

    return 0;
}

