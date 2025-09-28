#include <cstdio>
using namespace std;

int main()
{
    int numero = 320;
    int contador = 1;
    
    do {
        printf("Numero: %d\n", numero);
        numero -= 20;
        contador++;
    } while(numero >= 160);
    
}