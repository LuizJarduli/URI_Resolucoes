#include <iostream>

using namespace std;

int main() {

    int N, i;
    cin >> N;
    int x[N];
    for(i = 0; i < N; i++){
        cin >> x[i];
    }
    for(i = 0; i < N; i++) {
        if(x[i] == 0){
            cout << "NULL" << endl;
        } else{
            if(x[i] % 2 == 0){
                if(x[i] < 0){
                    cout << "EVEN NEGATIVE" << endl;
                } else {
                    cout << "EVEN POSITIVE" << endl;
                }

            } else {
                if(x[i] < 0){
                    cout << "ODD NEGATIVE" << endl;
                } else {
                    cout << "ODD POSITIVE" << endl;
                }
            }
        }

    }
    return 0;
}
