#include <iostream>
using namespace std;

void shellSort(int a[], int n) {
    int salto, i, j, auxiliar;

    for (salto = n / 2; salto > 0; salto = salto / 2) {
        for (i = salto; i < n; i++) {
            auxiliar = a[i];
            j = i;

            while (j >= salto && a[j - salto] > auxiliar) {
                a[j] = a[j - salto];
                j = j - salto;
            }

            a[j] = auxiliar;
        }
    }
}

int main() {
    int n;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    if (n <= 0) {
        cout << "La cantidad debe ser mayor que cero." << endl;
        return 1;
    }

    int* a = new int[n];

    cout << "Ingrese los elementos del array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> a[i];
    }

    cout << "\nArray original: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    shellSort(a, n);

    cout << "\nArray ordenado con Shell Sort: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;

    delete[] a;
    return 0;
}
