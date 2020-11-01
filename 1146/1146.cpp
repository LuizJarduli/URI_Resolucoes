#include <iostream>

using namespace std;

int main() {

    int x , i;
    cin >> x;
    do{
        if(x == 0)break;
        else{
            for(i = 1; i <= x; i++){
                if(i != x){
                    cout << i << " ";
                } else {
                    cout << i << endl;
                }
            }
        }
        cin >> x;
    }while(x != 0);

    return 0;
}

