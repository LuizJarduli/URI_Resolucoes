#include <iostream>

using namespace std;

int main() {

    int N, r1,r2, total,i;
    total = 0;
    cin >> N;
    for(i = 0; i < N; i++){
        cin >> r1 >> r2;
        total = r1+r2;
        cout << total << endl;
    }

    return 0;
}
