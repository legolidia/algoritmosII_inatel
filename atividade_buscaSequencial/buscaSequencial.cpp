#include <iostream>
#include <string.h>

using namespace std;

struct Aluno
{
	string nome;
	int matricula;
	float nota;
};


// 1 + 22n pior caso 
int buscaPorMatricula(int matricula, Aluno alunos[], int tam)
{
	// 1 + 6n  
	for (int i = 0; i < tam; i++)
	{
		// 4
		if (alunos[i].matricula == matricula)
		{
			// 9 
			cout << "Nome: " << alunos[i].nome << " | Matricula: " << alunos[i].matricula << " | Nota: " << alunos[i].nota << endl;
			break;
		}
		// 3
		if(i == tam - 1)
			cout << "Nenhum aluno com essa matricula foi encontrado." << endl;
	}
	return -1;
}


//1 + 22n pior caso
int buscaPorNome(string nome, Aluno alunos[], int tam)
{
	//1 + 6n
	for (int i = 0; i < tam; i++)
	{
		//4
		if (alunos[i].nome == nome)
		{
			//9
			cout << "Nome: " << alunos[i].nome << " | Matricula: " << alunos[i].matricula << " | Nota: " << alunos[i].nota << endl;
			break;
		}
		//3
		if(i == tam - 1)
			cout << "Nenhum aluno com este nome foi encontrado." << endl;
	}
	return -1;
}

//2 + 13n
int buscaPorNota(float nota, Aluno alunos[], int tam)
{
	//1
	int cont = 0;
	
	//1 + 6n
	for (int i = 0; i < tam; i++)
		//4
		if (alunos[i].nota <= nota)
			//3
			cont++; // cont = cont + 1
			
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

	//0
	int matricula;
	string nome;
	float nota;
	int op;

	//0
	cout << "MENU" << endl;
	cout << "1 - Busca por matricula" << endl;
	cout << "2 - Busca por nome" << endl;
	cout << "3 - Busca por nota" << endl;
	cout << "--------------------------" << endl;
	cout << "0 - sair" << endl;
	cout << endl;

	
	//
	do
	{
		cout << "Digite a opcao desejada" << endl;
		//1
		cin >> op;

		switch(op)
		{
		case 1:
		{
			cout << "Digite a matricula que deseja buscar: " << endl;
			cin >> matricula;
			buscaPorMatricula(matricula, alunos, 5);
			break;

		}
		case 2:
		{
			cout << "Digite o nome que deseja buscar: " << endl;
			cin >> nome;
			buscaPorNome(nome, alunos, 5);
			break;

		}
		case 3:
			cout << "Digite a nota para encontrar alunos com a nota inferior" << endl;
			cin >> nota;
			if(buscaPorNota(nota, alunos, 5) != 0)
				cout << buscaPorNota(nota, alunos, 5) << " alunos tiraram nota abaixo de " << nota << endl;
			else
				cout << "Nenhum aluno tirou nota abaixo de " << nota << endl;
			break;
		}
	}
	while(op != 0);

	cin.get();

	return 0;
}
