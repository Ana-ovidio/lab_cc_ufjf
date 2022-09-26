#include <iostream>

using namespace std;

float soma(int n, float vet[])
{
    if (n == 1)
        return vet[0];
    else
        return vet [n-1] + soma (n-1, vet);
}


int main()
{
    int n = 3;
    float * vet = new float[n];
    float soma_vet;
    
    for (int i=0; i<n; i++)
        cin >> vet[i];
        
    soma_vet = soma(n, vet);
    cout << soma_vet;

    delete [] vet;
    return 0;
}