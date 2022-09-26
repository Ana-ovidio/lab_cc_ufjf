
#include <iostream>

using namespace std;

void imprimeDecrescente(int n)
{
    if(n>=0)
    {
        cout << n << " ";
        imprimeDecrescente(n-1);
    }
}

int main()
{
    imprimeDecrescente(16);
    return 0;
}