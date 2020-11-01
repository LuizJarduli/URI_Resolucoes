#include <iostream>


using namespace std;

int main() {

    int n , i, j, val;
    while(cin >> n){
        if(n == 0)break;
        for(i = 1; i <= n; i++){
            val = i;
            for(j = 1; j <= n; j++){
                if(j > i){
                    val++;
                }
                if(j < i && j > 1){
                    val--;
                }

                if(j == i){
                    val = 1;
                }

                if(j == n){
                    if(val >= 100)cout <<  val;
                    else if(val >= 10) cout << " " <<  val;
                    else cout << "  " << val;

                } else {
                    if(val >= 100)cout <<  val << " ";
                    else if(val >=10)cout << " " <<  val << " ";
                    else cout << "  " << val << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}

