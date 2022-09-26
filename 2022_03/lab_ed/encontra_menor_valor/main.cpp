#include <iostream>

using namespace std;

float encontra_recursivamente (float vet[], int i, int n)
{
    if (i == n-1)
        return vet[i];
        
    float valor = encontra_recursivamente(vet, i+1, n);
    return (valor<vet[i]) ? valor:vet[i];
}

float menor(int n, float vet[])
{
    return encontra_recursivamente (vet, 0, n);
}

int main()
{
    int n; 
    cin >> n;
    
    float * vet = new float[n];
    
    for(int i=0; i<n; i++)
        cin >> vet[i];
    
    cout << menor(n, vet);
    
    delete [] vet;
    return 0;
}