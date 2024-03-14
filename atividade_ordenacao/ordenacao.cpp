#include <iostream>

using namespace std;

void selectionSort(int vetor[], int n)
{
    for (int j = 0; j < n - 1; j++)
    {
        int menor = vetor[j], aux, pos_menor = j;
        for (int i = j + 1; i < n; i++)
        {
            if (vetor[i] < menor)
            {
                pos_menor = i;
                menor = vetor[i];
            }
        }

        aux = vetor[j];
        vetor[j] = menor;
        vetor[pos_menor] = aux;
    }
} // 15n^2 + 24n + 4 = O(n^2)

void insertionSort(int vetor[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int chave = vetor[i];
        int j = i - 1;

        while (j >= 0 && vetor[j] > chave)
        {
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = chave;
    }
} // n^2 + n + 4 = O(n^2)

void bubbleSort(int vetor[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
} // 6n^2 - 12n + 6 = O(n^2)

int main()
{
    int vetor[] = {4, 7, 0, 14, 13, 15, 17, 9};
    int tamVetor = sizeof(vetor) / sizeof(vetor[0]);

    selectionSort(vetor, tamVetor);
    // insertionSort(vetor, tamVetor);
    // bubbleSort(vetor, tamVetor);

    for (int i = 0; i < tamVetor; i++)
    {
        cout << vetor[i] << " ";
    }

    cout << endl;

    return 0;
}

// De acordo com pesquisas, o InsertionSort tende a ser mais  rápido em diversas situações e o BubbleSort
// mais lento, porém os 3 têm a complexidade O(n^2)
