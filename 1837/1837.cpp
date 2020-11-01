#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int a,b,q,r;
    cin >> a >> b;
    q = a/b;
    r = a%b;
    if(r < 0){
        if( q <= 0){
            if(a < b){
                q--;
            } else {
                q++;
            }
        } else {
            q++;
        }
        r = abs(q*b) + a;
    }
    cout << q << " " << r << endl;

    return 0;
}
