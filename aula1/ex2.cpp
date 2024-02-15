#include <iostream>
#include <string>

using namespace std;

int main(){
    struct Aluno{
        string nome_aluno;
        int matricula;
        float nota;
    };

    Aluno a[40];

    a[0].matricula = 641;
    a[0].nome_aluno = "Lidia";
    a[0].nota = 100.0;



    return 0;
}; 
