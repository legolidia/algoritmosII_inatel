#include<iostream>
using namespace std;

int potencia(int b, int e){
    if(e == 0){
        return 1;
    }
    return b * potencia(b, e-1);
}

int main(){
    int b, e;
    cin >> b >> e;
    cout << potencia(b, e) << endl;
}