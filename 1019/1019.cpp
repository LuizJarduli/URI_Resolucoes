
#include <iostream>

using namespace std;

int main() {

    int seg, hora, minuto;
    cin >> seg;
    minuto = seg / 60 >= 60 ? (seg /60) % 60: seg /60;
    hora = (seg / 60) / 60;
    seg = seg % 60  == 0 ? seg : seg % 60;
    cout << hora << ":" << minuto << ":" << seg << endl;

    return 0;
}
