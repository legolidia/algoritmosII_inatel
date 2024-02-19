#include <iostream>
#include <string.h>

using namespace std;

struct Aluno
{
	string nome;
	int matricula;
	float nota;
};

int buscaPorMatricula(int matricula, Aluno alunos[], int tam)
{
	for (int i = 0; i < tam; i++){
		if (alunos[i].matricula == matricula){
			cout << "Nome: " << alunos[i].nome << " | Matricula: " << alunos[i].matricula << " | Nota: " << alunos[i].nota << endl;
			break;}
		if(i==tam-1)
			cout << "Nenhum aluno com essa matricula foi encontrado." << endl;
	}
	return -1;
}

int buscaPorNome(string nome, Aluno alunos[], int tam)
{
	for (int i = 0; i < tam; i++){
		if (alunos[i].nome == nome){
			cout << "Nome: " << alunos[i].nome << " | Matricula: " << alunos[i].matricula << " | Nota: " << alunos[i].nota << endl;
			break;
		}
		if(i==tam-1)
			cout << "Nenhum aluno com este nome foi encontrado." << endl;
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

	Aluno alunos[5] =
	{
		{"Taylor", 1, 7.5},
		{"Swift", 2, 8.0},
		{"Betty", 3, 6.5},
		{"James", 4, 9.0},
		{"Augustine", 5, 5.0}
	};

	int matricula;
	string nome;
	float nota;


	cin >> matricula;
	buscaPorMatricula(matricula, alunos, 5);

	cin >> nome;
	buscaPorNome(nome, alunos, 5);

	cin >> nota;
	if(buscaPorNota(nota, alunos, 5) != 0)
		cout << buscaPorNota(nota, alunos, 5) << " alunos tiraram nota abaixo de " << nota << endl;
	else 
		cout << "Nenhum aluno tirou nota abaixo de " << nota << endl;

	cin.get();

	return 0;
}
