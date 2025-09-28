#include <cstdio>
using namespace std;

int main()
{
    const int contra = 1234;
    int intentos;

    printf("Contarseña(4 numeros): ");
    scanf("%d", &intentos);
    
    if(intentos == contra)
    {
        printf("La caja fuerte se ha abierto\n");
    }
    else
    {
        printf("Combinacion incorrecta\n");
    }
    
}