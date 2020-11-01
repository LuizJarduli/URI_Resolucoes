#include <iostream>


using namespace std;

int main() {

    int n , i, j, val;
    while(cin >> n){
        if(n == 0)break;
        for(i = 1; i <= n; i++){
            for(j = 1; j <= n; j++){
                val = i;
                if(j < val){
                    val = j;
                }
                if(1 + (n-i) < val){
                    val = 1 + (n-i);
                }
                if(1 + (n-j) < val){
                    val = 1 + (n-j);
                }
                if(j == n){
                    cout << "  " <<  val;
                } else {
                    if(val >= 10)cout << " " <<  val << " ";
                    else cout << "  " <<  val << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
