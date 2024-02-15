#include <iostream>

using namespace std;

int main(){
    char aux;
    char nome[40];
    int quantidade_f = 0;
    int letra_atual = 0;

    cin >> aux;

    while(aux != '&'){
        nome[letra_atual] = aux;
        
        letra_atual++;
        
        if(aux == 'f' || aux == 'F')
            quantidade_f++;

        cin >> aux;
    }
//0
    char letra_buscada;
//1
    bool encontrada = false;
//1
    cin >> letra_buscada;
//1+6n     //1    //3 | n      //3
   for(int i=0; i<letra_atual; i++){
  //4n       //1     //1   //2
      if(letra_buscada == nome[i]){
           //0      
            cout << "Letra encontrada" << endl;
            encontrada = true;
            break;
        }
    }


    //2
    if(!encontrada)
    //1
        cout << "Letra nao encontrada" << endl;

    //10n + 6 (complexidade do pior caso)
    return 0;
}
