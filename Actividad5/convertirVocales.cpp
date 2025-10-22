#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    char cadena[100];
    char resultado[100];
    
    printf("cadena: ");
    scanf("%s", cadena);
    
    int longitud = strlen(cadena);
    
    for(int i = 0; i < longitud; i++) 
    {
        char letra = cadena[i];
        
        if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') 
        {
            resultado[i] = '.';
        } 
        else 
        {
            resultado[i] = letra;
        }
    }
    resultado[longitud] = '\0'; // terminar cadena 
    
    printf("original: %s\n", cadena);
    printf("resultado: %s\n", resultado);
}