#include <iostream>
using namespace std;

int main() {
    int P, n;
    cin >> P;
    cin >> n;
    // Aqui incialice todos los valores del arreglo a 0 para evitar datos basura
    int frecuencia[101] = {0};
    for (int i = 0; i < n; i++) {
        int F;
        cin >> F;
        frecuencia[F] = frecuencia[F] + 1 ;
    }
    for (int i = 1; i <= P; i++) {
        cout << i << "-" << frecuencia[i] << endl;
    }

    return 0;
}