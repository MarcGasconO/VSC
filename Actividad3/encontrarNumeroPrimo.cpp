#include <cstdio>
using namespace std;

int main()
{
    int numero;
    bool primo = true;
    
    printf("Numero: ");
    scanf("%d", &numero);
    
    if(numero <= 1)
    {
        primo = false;
        printf("Error\n");
    }
    else
    {
        
        for(int i = 2; i < numero; i++)
        {
            if(numero % i == 0)
            {
                primo = false;
            }
        }
    }
    
    if(primo)
    {
        printf("El numero es primo %d\n", numero);
    }
    else
    {
        printf("El numero no es primo %d\n", numero);
    }
    
}