#include <iostream>
using namespace std;

int main() {
    int datos[10];
    int n = 8;
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temporal = datos[i];
            int j = i;

            while (j >= gap && datos[j - gap] > temporal) {
                datos[j] = datos[j - gap];
                j -= gap;
            }

            datos[j] = temporal;
        }
    }

    cout << "Serie ordenada: ";

    for (int i = 0; i < n; i++) {
        cout << datos[i] << " ";
    }

    return 0;
}

