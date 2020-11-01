#include <iostream>

using namespace std;

int main() {

    int n,i;
    string sheldon, raj, msg;
    msg = ": De novo!";
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> sheldon >> raj;
        if(sheldon == raj){
            msg = ": De novo!";
            cout << "Caso #" << i+1 << msg << endl;
        }
        else {
            if(sheldon == "pedra"){

                msg = raj == "papel"
                ? ": Raj trapaceou!" : raj == "lagarto"
                ? ": Bazinga!" : raj == "Spock"
                ? ": Raj trapaceou!" : raj == "tesoura"
                ? ": Bazinga!" : ": De novo!";

            } else if(sheldon == "papel"){

                msg = raj == "tesoura"
                ? ": Raj trapaceou!" : raj == "pedra"
                ? ": Bazinga!" : raj == "lagarto"
                ? ": Raj trapaceou!" : raj == "Spock"
                ? ": Bazinga!" : ": De novo!";

            } else if(sheldon == "tesoura"){

                msg = raj == "Spock"
                ? ": Raj trapaceou!" : raj == "papel"
                ? ": Bazinga!" : raj == "pedra"
                ? ": Raj trapaceou!" : raj == "lagarto"
                ? ": Bazinga!" : ": De novo!";

            } else if(sheldon == "lagarto"){

                msg = raj == "pedra"
                ? ": Raj trapaceou!" : raj == "Spock"
                ? ": Bazinga!" : raj == "tesoura"
                ? ": Raj trapaceou!" : raj == "papel"
                ? ": Bazinga!" : ": De novo!";

            } else if(sheldon == "Spock"){

                msg = raj == "lagarto"
                ? ": Raj trapaceou!" : raj == "tesoura"
                ? ": Bazinga!" : raj == "papel"
                ? ": Raj trapaceou!" : raj == "pedra"
                ? ": Bazinga!" : ": De novo!";

            }
            cout << "Caso #" << i+1 << msg << endl;
        }
    }

    return 0;
}
