#include <iostream>
using namespace std;

void insertionSort(int vetor[], int n)
{
    int aux, i, j;
    for (i = 1; i < n; i++)//1 + 3(n+1) + 3n = 6n+4
    {
        aux = vetor[i]; //3n
        for (j = i - 1; j >= 0; j--)//3n + n[3(n/2 + 1)] + 3n/2 = 3n + 1,5² + 1,5n² = 6n + 3n²
        {
            if (aux < vetor[j])//n(4n/2) = n(2n) = 2n²
                vetor[j + 1] = vetor[j]; //n(5n/2) = n(2,5n) = 2,5n²
            else
                break;
        }
        vetor[j + 1] = aux;//4n
    }
}// 7,5n² + 19n + 4 = n² + n = O(n²)

int main()
{
    int vetor[] = {5, 6, 1, 2, 32, 45, 67};
    int tamVetor = sizeof(vetor) / sizeof(vetor[0]);
    insertionSort(vetor, tamVetor);
    for (int i = 0; i < tamVetor; i++)
        cout << vetor[i] << " ";
   
}