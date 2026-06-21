#include <iostream>
using namespace std;
int frecuencia[1000001] = {0};
int main() {
    int N, C;
    cin >> N >> C;
    for (int i = 0; i < C; i++) {
        int vaso;
        cin >> vaso;
        frecuencia[vaso]= frecuencia[vaso] + 1;
    }
    
    for (int i = 1; i <= N; i++) {
        cout << frecuencia[i] << endl;
    }

    return 0;
}