#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int n,aux,i,j, numSp;
    string t = "";
    aux = 2;
    numSp = 0;
    t = "";
    while(cin >> n){
        if(n == 0)break;
        numSp = pow(2,n-1) * pow(2,n-1);
        t = "";
        while(numSp >= 10){
            numSp = numSp/10;
            t = t + " ";
        }
        for(i = 0; i < n; i++){
            aux = pow(aux,i);
            for(j = 0; j < n; j++){
                if(j == 0){
                    if(aux >= 100000000)cout << t.substr(0, t.size()-8) << aux;
                    else if(aux >= 10000000)cout << t.substr(0, t.size()-7) << aux;
                    else if(aux >= 1000000)cout << t.substr(0, t.size()-6) << aux;
                    else if(aux >= 100000)cout << t.substr(0, t.size()-5) << aux;
                    else if(aux >= 10000)cout << t.substr(0, t.size()-4) << aux;
                    else if(aux >= 1000)cout << t.substr(0, t.size()-3) << aux;
                    else if(aux >= 100)cout << t.substr(0, t.size()-2) << aux;
                    else if(aux >= 10)cout << t.substr(0, t.size()-1) << aux;
                    else cout << t << aux;

                } else {
                    aux *= 2;
                    if(aux >= 100000000)cout << t.substr(0, t.size()-8) << " " << aux;
                    else if(aux >= 10000000)cout << t.substr(0, t.size()-7) << " " <<  aux;
                    else if(aux >= 1000000)cout << t.substr(0, t.size()-6) << " " <<  aux;
                    else if(aux >= 100000)cout << t.substr(0, t.size()-5) << " " << aux;
                    else if(aux >= 10000)cout << t.substr(0, t.size()-4) << " " << aux;
                    else if(aux >= 1000)cout << t.substr(0, t.size()-3) << " " << aux;
                    else if(aux >= 100)cout << t.substr(0, t.size()-2) << " " << aux;
                    else if(aux >= 10)cout << t.substr(0, t.size()-1) << " " <<aux;
                    else cout << t << " " << aux;
                }
            }
            cout << endl;
            aux = 2;
        }
        cout << endl;
    }
    return 0;
}
