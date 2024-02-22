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
    {   //6n
        int meio = (inicio + fim) / 2;
        //4n
        if (alunos[meio].matricula == matricula_buscada)
            return meio;
        //4n
        else if (alunos[meio].matricula < matricula_buscada)
            inicio = meio + 1;
        else
            //4n
            fim = meio - 1;
    } 

    return -1;
   
} //17n + 3 (u.t.)

int busca_nota(Aluno alunos[], float nota_buscada, int tamanho)
{
    //1
    int quantidade_alunos_abaixo_nota = 0;

    //1 + 3n + 3n = 1 + 6n
    for (int i = 0; i < tamanho; i++)
        //4n
        if (alunos[i].nota < nota_buscada)
        //3n
            quantidade_alunos_abaixo_nota++;
    //1
    return quantidade_alunos_abaixo_nota;
} //13n + 3 (u.t.)

int main()
{
    Aluno lista_alunos[5] =
        {
            {"Taylor", 1, 7.5},
            {"Swift", 2, 8.0},
            {"Olivia", 3, 6.5},
            {"Meredith", 4, 9.0},
            {"Benjamin", 5, 5.0}};

    cout << busca_matricula(lista_alunos, 13, 5) << endl;
    cout << busca_nota(lista_alunos, 7.0, 5) << endl;

}