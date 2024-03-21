#include <iostream>
using namespace std;

int fatorial_it(int n)
{
    int solucao = 1;
    for(int i =n; i>=1; i--){ //O(n)
        solucao *= i;
    }

    return solucao;
}

int fatorial(int n)
{
    if (n==1)
        return 1;
    return n * fatorial(n - 1);    //T(n) = T(n-1) + O(1) ---> T(n) = T(n-1)
}                                  //T(n) ---> O(n)

int main()
{
    int n = 5;
    cout << fatorial_it(n) << endl;
    return 0;
}