#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double x1,x2,y1,y2,distancia;
    distancia = 0;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    distancia = sqrt((pow(x2-x1, 2) + pow(y2-y1,2)));
    cout.precision(4);
    cout << fixed << distancia << endl;
    return 0;
}
