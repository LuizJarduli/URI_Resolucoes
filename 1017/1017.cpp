#include <iostream>

using namespace std;

int main() {

   int tviagem, veloviagem;
   double qtdlitros;
   qtdlitros = 0;
   cin >> tviagem;
   cin >> veloviagem;
   qtdlitros = (tviagem * veloviagem) / 12.0;
   cout.precision(3);
   cout << fixed << qtdlitros << endl;

   return 0;
}
