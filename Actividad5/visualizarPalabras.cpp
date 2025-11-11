#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    char palabras[5][100];
    
    for(int i = 0; i < 5; i++) 
    {
        printf("Palabra %d: ", i + 1);
        scanf("%s", palabras[i]);
    }
    
    for(int i = 0; i < 5; i++) 
    {
        printf("%s %d letras\n", palabras[i], strlen(palabras[i]));
    }
}