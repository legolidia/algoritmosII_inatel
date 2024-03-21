#include <iostream>
#include <string>

using namespace std;

int busca_binaria(int vetor[], int i, int f, int elemento)
{
    if (i > f)
    {
        return -1;
    }
    int meio = (i + f) / 2;
    if (vetor[meio] == elemento)
    {
        return meio;
    }
    else if (vetor[meio] > elemento)
    {
        return busca_binaria(vetor, meio - 1, f, elemento);
    }
    else
    {
        return busca_binaria(vetor, i, meio + 1, elemento);
    }
}

int main()
{
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << busca_binaria(vetor, 0, 8, 5) << endl;
    return 0;
}