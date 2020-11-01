#include <iostream>

using namespace std;

int main() {

    int t,i, pa, pb, total;
    double p1, p2;
    total = 1;
    cin >> t;
    for(i = 0; i < t; i++){
        cin >> pa >> pb >> p1 >> p2;
        while(pa <= pb){
            total++;
            pa += (pa*(p1/100));
            pb += (pb*(p2/100));
            if(total > 100){
                break;
            }

        }
        if(total > 100)cout << "Mais de 1 seculo." << endl;
        else cout << total << " anos." << endl;
        total = 0;
    }
    return 0;
}
