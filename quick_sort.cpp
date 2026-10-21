#include <iostream>
using namespace std;

void quickSort(int a[], int inicio, int fin) {
    int i = inicio;
    int j = fin;
    int pivote = a[(inicio + fin) / 2];
    int auxiliar;

    while (i <= j) {
        while (a[i] < pivote) {
            i++;
        }

        while (a[j] > pivote) {
            j--;
        }

        if (i <= j) {
            auxiliar = a[i];
            a[i] = a[j];
            a[j] = auxiliar;

            i++;
            j--;
        }
    }

    if (inicio < j) {
        quickSort(a, inicio, j);
    }

    if (i < fin) {
        quickSort(a, i, fin);
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

    quickSort(a, 0, n - 1);

    cout << "\nArray ordenado con Quick Sort: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;

    delete[] a;

    return 0;
}
