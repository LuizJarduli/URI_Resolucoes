#include <iostream>

using namespace std;

int main(){

    int X;
    double Y, kml;
    cin >> X;
    cin >> Y;
    kml = X / Y;
    cout.precision(3);
    cout << fixed << kml << " km/l" << endl;

    return 0;
}
