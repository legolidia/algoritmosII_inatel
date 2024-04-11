#include <iostream>
using namespace std;

void insercaoDireta(int vetor[], int tamanho)

{

    int i,j; // contadores

    int chave;

    for (j=1;j<tamanho;j++) //6n + 1

    {
        cout << "entrou no for" << endl;

        chave = vetor[j];

        i = j-1;

        while ((i >= 0) && (vetor[i] > chave))

        {   
            cout << "entrou no while" << endl;

            vetor[i+1] = vetor[i];

            i = i-1;

        }

        cout << "vetor" << endl;
        vetor[i+1] = chave;


    }

}


int main(){
    int vetor[] = {2,1,3};
    insercaoDireta(vetor, 3);
    for(int i = 0; i < 3; i++){
        cout << vetor[i] << " ";
    }
}