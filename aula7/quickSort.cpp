#include <iostream>

using namespace std;

void quickSort(int vetor[], int inicio, int fim)
{
    int pivot = vetor[(inicio + fim) / 2];
    int aux, i = inicio, j = fim;

    while (vetor[i] < pivot)
        i++;

    while (vetor[j] > pivot)
        j--;

    if (i <= j)
    {
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
        i++;
        j--;
    }

    if (inicio < j)
        quickSort(vetor, inicio, j);
    if(i < fim)
        quickSort(vetor, i, fim);
}

//T(n) = aT(n/b) + O(n^d)
//T(n) = 2T(n/2) + O(n)
//a = 2, b = 2, d = 1
//a = b^d => 2 = 2^1
//O(n^d * log2(n)) = O(n * log2(n))

int main()
{
    int n = 7;
    int vetor[7] = {34, 3, 2, 8, 5, 13, 21};

    quickSort(vetor, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << vetor[i] << " ";

    cout << endl;

    return 0;
}