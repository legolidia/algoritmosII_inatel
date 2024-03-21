#include<iostream>
using namespace std;

int fibonacci_it(int n)
{
    int solucao[n];
    solucao[0] = 1;
    solucao[1] = 1;
    for(int i=2; i<n;i++){
        solucao[i] = solucao[i-1]+solucao[i-2]; 
    }
    return solucao[n-1];
}

int main()
{
    int n = 7;
    cout << fibonacci_it(n) << endl;
    return 0;
}