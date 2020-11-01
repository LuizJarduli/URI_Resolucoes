#include <iostream>

using namespace std;

int main() {

    int n,i, fat;
    cin >> n;
    fat = n;
    for(i = n - 1 ; i >= 1; i--){
        fat = fat * (n - i);
    }
    cout << fat << endl;

    return 0;
}
