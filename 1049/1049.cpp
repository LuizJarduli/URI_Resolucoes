#include <iostream>

using namespace std;

int main() {

    string p1, p2, p3, result;
    cin >> p1;
    cin >> p2;
    cin >> p3;
    result = p1 == "vertebrado" ? p2 == "mamifero" ? p3 == "onivoro" ? "homem" : "vaca" : p3 == "carnivoro" ? "aguia" : "pomba" : p2 == "inseto" ? p3 == "herbivoro" ? "lagarta" : "pulga" : p3 == "hematofago" ? "sanguessuga" : "minhoca";
    cout << result << endl;
    return 0;
}
