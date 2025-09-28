#include <cstdio>
using namespace std;

int main()
{
    const int contra = 1234;
    const int maxIntentos = 4;
    int contraPuesta;
    int intentos = 0;
    
    while(intentos < maxIntentos)
    {
        printf("Poner conbinacion\n");
        scanf("%d", &contraPuesta);
        
        if(contraPuesta == contra)
        {
            printf("Combinacion correcta\n");
            break;
        }
        else
        {
            intentos++;
            printf("Combinacion incorrecta\n");
            
            if(intentos < maxIntentos)
            {
                printf("Te quedan: %d\n", maxIntentos - intentos);
            }
        }
    }
    

}