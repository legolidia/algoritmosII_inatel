#include <iostream>
using namespace std;

void foo()
{
    cout << "foo" << endl;
}

int main()
{
    int i, x, y, n;

    // 6n + 1
    for (i = 0; i < n; i++)
    {
        // 3n
        x = 2 * i + 1;
        // 3n
        y = 3 + i;
    }
    // 12n + 1

    //1
    int n = 64;
    //1
    int i = 1;
    //3n
    while (i <= n)
    {
        foo();
        i = i * 2;
    }
   
   
}