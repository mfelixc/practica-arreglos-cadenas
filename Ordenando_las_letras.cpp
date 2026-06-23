#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s, letras;
    getline(cin, s);

    for (char c : s) {
        if (c >= 'a' && c <= 'z')
            letras += c;
    }
    
    sort(letras.begin(), letras.end());

    cout << letras << endl;

    return 0;
}