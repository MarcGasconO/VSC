#include <cstdio>
using namespace ::std;

int main()
{
    int num1;
    int num2;
    int resultado;
    
    printf("Primer numero: ");
    scanf("%d", &num1);
    printf("Segundo número: ");
    scanf("%d", &num2);
    
    if(num1 == num2)
    {
        resultado = num1 * num2;
        printf("Son iguales: %d\n", resultado);
    }
    else if(num1 > num2)
    {
        resultado = num1 - num2;
        printf("Es mayor: %d\n", resultado);
    }
    else
    {
        resultado = num1 + num2;
        printf("Suma: %d\n", resultado);
    }
}