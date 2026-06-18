#include <iostream>
using namespace std;

int main() {
    int N,a[1000];
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    for (int i = N - 1; i >= 0; i--) {
        cout << a[i];
        if (i > 0) {
        cout << " ";
        }
    }

    return 0;
}