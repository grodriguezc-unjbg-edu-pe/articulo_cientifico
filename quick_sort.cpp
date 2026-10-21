#include <iostream>
using namespace std;

// Funcion Quick Sort
void quickSort(int arreglo[], int inicio, int fin) {
    int i = inicio;
    int j = fin;
    int pivote = arreglo[(inicio + fin) / 2];

    while (i <= j) {
        while (arreglo[i] < pivote) {
            i++;
        }

        while (arreglo[j] > pivote) {
            j--;
        }

        if (i <= j) {
            int temporal = arreglo[i];
            arreglo[i] = arreglo[j];
            arreglo[j] = temporal;

            i++;
            j--;
        }
    }

    if (inicio < j) {
        quickSort(arreglo, inicio, j);
    }

    if (i < fin) {
        quickSort(arreglo, i, fin);
    }
}
int main() {
    int arreglo[] = {3, 5, 2, 8, 6, 1, 4, 10, 7, 11};
    int n = 10;

    cout << "Serie original: ";

    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }

    // Aplicar Quick Sort
    quickSort(arreglo, 0, n - 1);

    cout << "\nSerie ordenada: ";

    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }

    return 0;}
