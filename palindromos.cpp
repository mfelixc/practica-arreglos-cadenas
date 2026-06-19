#include <iostream>
#include <string>
using namespace std;
int main() {
int N;
string palabra;
bool palindromo;
cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> palabra;
        palindromo = true;
    for (int i = 0; i < palabra.length() / 2; i++) {
        if (palabra[i] != palabra[palabra.length() - 1 - i]) {
            palindromo = false;
            break;
             }
        }
        if (palindromo)
            cout << "P" << endl;
        else
            cout << "NP" << endl;
    }
return 0;
}