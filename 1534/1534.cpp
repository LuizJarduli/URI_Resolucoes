#include <iostream>

using namespace std;

int main(){

    int N, i, j, val;
    val = 0;
    while(cin >> N){
        for(i = 0; i < N; i++){
            for(j = 0; j < N; j++){
                if(j == N-(i+1)){
                    val = 2;
                }
                else if(j == i){
                    val = 1;
                }
                else{
                    val = 3;
                }
                cout << val;
            }
            cout << endl;
        }
    }
    return 0;
}
