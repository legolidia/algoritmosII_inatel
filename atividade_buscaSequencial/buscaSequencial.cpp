#include <iostream>

using namespace std;

struct Aluno
{
  string nome;
  int matricula;
  float nota;
};

int buscaPorMatricula(int matricula, Aluno alunos[], int tam)
{
  for (int i = 0; i < tam; i++)
  {
    if (alunos[i].matricula == matricula)
    {
      cout << alunos[i].nome << " " << alunos[i].matricula << " " << alunos[i].nota << endl;
    }
  }
  return -1;
}

int buscaPorNome(string nome, Aluno alunos[], int tam)
{
  for (int i = 0; i < tam; i++)
  {
    if (alunos[i].nome == nome)
    {
      cout << alunos[i].nome << " " << alunos[i].matricula << " " << alunos[i].nota << endl;
    }
  }
  return -1;
}

int buscaPorNota(float nota, Aluno alunos[], int tam)
{
  int cont = 0;
  for (int i = 0; i < tam; i++)
    if (alunos[i].nota <= nota)
      cont++;
      
  return cont;
}

int main()
{

  Aluno alunos[5] = {
      {"Taylor", 1, 7.5},
      {"Swift", 2, 8.0},
      {"Betty", 3, 6.5},
      {"James", 4, 9.0},
      {"Augustine", 5, 5.0}};

  buscaPorMatricula(2, alunos, 5);
  buscaPorNome("Taylor", alunos, 5);
  buscaPorNota(7.0, alunos, 5);

  cin.get(); // Espera o usuário pressionar Enter antes de sair

  return 0;
}