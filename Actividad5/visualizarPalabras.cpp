#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    char palabras[5][100];
    
    printf("5 palabras:\n");
    
    for(int i = 0; i < 5; i++) 
    {
        printf("Palabra %d: ", i + 1);
        scanf("%s", palabras[i]);
    }
    
    printf("\nResultados:\n");
    for(int i = 0; i < 5; i++) 
    {
        printf("%s - %d letras\n", palabras[i], strlen(palabras[i]));
    }
}