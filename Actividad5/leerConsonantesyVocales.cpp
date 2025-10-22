#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    char cadena[100];
    int vocales = 0, consonantes = 0;
    
    printf("cadena: ");
    scanf("%s", cadena);
    
    int longitud = strlen(cadena);
    
    for(int i = 0; i < longitud; i++) 
    {
        char letra = cadena[i];
        
        if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') 
        {
            vocales++;
        } 
        else if((letra >= 'a' && letra <= 'z')) 
        {
            consonantes++;
        }
    }
    
    printf("vocales %d\n", vocales);
    printf("consonantes %d\n", consonantes);
}