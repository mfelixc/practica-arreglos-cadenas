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
    
    int pos = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = letras[pos];
            pos++;
        }
    }

    cout << s << endl;

    return 0;
}