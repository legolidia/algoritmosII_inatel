#include <iostream>
#include <string>

using namespace std;

struct Aluno
{
    string nome;
    int matricula;
    float nota;
};

int busca_matricula(Aluno alunos[], int matricula_buscada, int tamanho)
{
    //1
    int inicio = 0;
    //3
    int fim = tamanho - 1;

    //3n
    while (inicio <= fim)
    {   //5n
        int meio = (inicio + fim) / 2;
        //4n
        if (alunos[meio].matricula == matricula_buscada)
            return meio;
        //4n
        else if (alunos[meio].matricula < matricula_buscada)
            //4n
            inicio = meio + 1;
        else
            fim = meio - 1;
    } 

    return -1;
   
} //1 + 3 + 3n + 5n + 4n + 4n + 4n = 20n + 4 

int main()
{
    Aluno lista_alunos[5] =
        {
            {"Taylor", 1, 7.5},
            {"Swift", 2, 8.0},
            {"Olivia", 3, 6.5},
            {"Meredith", 4, 9.0},
            {"Benjamin", 5, 5.0}};

    cout << busca_matricula(lista_alunos, 2, 5) << endl;

}