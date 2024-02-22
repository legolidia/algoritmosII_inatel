#include <iostream>
#include <string>

using namespace std;

struct Aluno
{
	string nome;
	int matricula;
	float nota;
};


//1 + 19n
int buscaPorMatricula(int matricula, Aluno alunos[], int tam)
{
	// 1 + 6n  
	for (int i = 0; i < tam; i++)
	{
		// 5n		
		if (alunos[i].matricula == matricula)
		{
			// 9n
			cout << "Nome: " << alunos[i].nome << " | Matricula: " << alunos[i].matricula << " | Nota: " << alunos[i].nota << endl;
			break;
		}
		// 3n
		if(i == tam - 1)
			cout << "Nenhum aluno com essa matricula foi encontrado." << endl;
	}
	return -1;
}


//1 + 19n
int buscaPorNome(string nome, Aluno alunos[], int tam)
{
	//1 + 6n
	for (int i = 0; i < tam; i++)
	{
		//5n
		if (alunos[i].nome == nome)
		{
			//9n
			cout << "Nome: " << alunos[i].nome << " | Matricula: " << alunos[i].matricula << " | Nota: " << alunos[i].nota << endl;
			break;
		}
		//3n
		if(i == tam - 1)
			cout << "Nenhum aluno com este nome foi encontrado." << endl;
	}
	return -1;
}

//2 + 14n
int buscaPorNota(float nota, Aluno alunos[], int tam)
{
	//1
	int cont = 0;
	
	//1 + 6n
	for (int i = 0; i < tam; i++)
		//5n
		if (alunos[i].nota <= nota)
			//3n
			cont++; // cont = cont + 1
			
	return cont;
}

int main()
{

	Aluno alunos[5] =
	{
		{"Taylor", 1, 7.5},
		{"Swift", 2, 8.0},
		{"Olivia", 3, 6.5},
		{"Meredith", 4, 9.0},
		{"Benjamin", 5, 5.0}
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

	
	//3 + 28n
	do
	{
		cout << "Digite a opcao desejada" << endl;
		//1
		cin >> op;

	//11 + 28n (pior caso possível)
		switch(op)
		{
		//1
		case 1:
		{
			//2+19n
			cout << "Digite a matricula que deseja buscar: " << endl;
			//1
			cin >> matricula;
			//1+19n
			buscaPorMatricula(matricula, alunos, 5);
			break;

		}
		//1
		case 2:
		{
			//2+19n
			cout << "Digite o nome que deseja buscar: " << endl;
			//1
			cin >> nome;
			//1+19n
			buscaPorNome(nome, alunos, 5);
			break;

		}
		
		//1
		case 3:
		//8 + 28n
			cout << "Digite a nota para encontrar alunos com a nota inferior" << endl;
			//1
			cin >> nota;
			//3+14n		 
			if(buscaPorNota(nota, alunos, 5) != 0)
				//3+14n 																
				cout << buscaPorNota(nota, alunos, 5) << " alunos tiraram nota abaixo de " << nota << endl;
			else
				//1
				cout << "Nenhum aluno tirou nota abaixo de " << nota << endl;
			break;
		}
	}
	// 2
	while(op != 0);

	cin.get();

	return 0;
}

//PIOR CASO: 3 + 28n -> O(n)