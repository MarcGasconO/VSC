#include <cstdio>

using namespace std;

int par(int n) {
    if (n % 2 == 0) 
    {
        return 1;
    } 
    else 
    {
        return 0;
    }
}

int main() {
    int numero;
    printf("Numero entero: ");
    scanf("%d", &numero);
    
    if (par(numero) == 1) 
    {
        printf("El numero %d es par.\n", numero);
    } 
    else 
    {
        printf("El numero %d es impar.\n", numero);
    }
    
}


