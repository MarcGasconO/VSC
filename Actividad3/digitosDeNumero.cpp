#include <cstdio>
using namespace std;

int main()
{
    int numero; 
    int contador = 0;
    int i;
    
    printf("Numero: ");
    scanf("%d", &numero);
    
    if(numero == 0)
    {
        contador = 1;
    }
    else
    {
        i = numero;
        
        while(i > 0)
        {
            contador++;
            i = i / 10;
        }
    }

    printf("El número tiene %d\n", contador);
    
}