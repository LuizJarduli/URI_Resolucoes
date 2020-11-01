#include <iostream>

using namespace std;

int main() {

   int idade, i;
   double media;
   media = 0;
   i = 0;
   while(cin >> idade){
       if(idade < 0)break;
       else{
           media += idade;
           i++;
       }
   }
   cout.precision(2);
   media = media / i;
   cout << fixed << media << endl;

    return 0;
}
