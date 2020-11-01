#include <iostream>

using namespace std;

int main() {

    int N, i;
    char ho[3] = "Ho";
    cin >> N;
    for(i = 0; i < N; i++){
        if(i == N-1) cout << ho << "!" << endl;
        else cout << ho << " ";
    }

    return 0;
}
