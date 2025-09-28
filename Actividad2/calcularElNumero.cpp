#include <cstdio>
using namespace std;

int main()
{
    int edad;
    char sexo;
    float num_pulsaciones;
    
    printf("Edad:");
    scanf("%d", &edad);
    printf("Sexo F o M: ");
    scanf(" %c", &sexo);
    
    if(sexo == 'F')
    {
        num_pulsaciones = (220 - edad) / 10;
    }
    else if(sexo == 'M')
    {
        num_pulsaciones = (210 - edad) / 10;
    }
    
    printf("Edad: %d años\n", edad);
    printf("Pulsaciones cada 10 segundos: %.2f\n", num_pulsaciones);
    printf("Pulsaciones por minuto: %.2f\n", num_pulsaciones * 6);
    
}