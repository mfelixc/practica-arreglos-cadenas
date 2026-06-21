#include <iostream>
using namespace std;
int main() {
    int N, C;
    cin >> N >> C;
    int frecuencia[1001] = {0}; 
 
    for (int i = 0; i < C; i++) {
        int vaso;
        cin >> vaso;
        frecuencia[vaso]= frecuencia[vaso] + 1;
    }

    return 0;
}