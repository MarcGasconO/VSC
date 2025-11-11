#include <cstdio>

using namespace std;

int negativo(int n) {
    if (n < 0) 
    {
        return 1;
    }
}

int main() {
    int numero;
    printf("Numero entero: ");
    scanf("%d", &numero);
    
    if (negativo(numero) == 1) 
    {
        printf("El numero %d es negativo.\n", numero);
    } 
    else 
    {
        printf("El numero %d no es negativo.\n", numero);
    }
}
