#include <cstdio>
#include <cstring>
using namespace std;

int main() {

    char resultado[100];
    char frase[100];
    printf("frase con multiples espacios %s", frase);
    scanf("%s\n", frase);

    
    printf("Frase original: '%s'\n", frase);
    
    int j = 0;
    bool espacio_anterior = false;
    int longitud = strlen(frase);
    
    for(int i = 0; i < longitud; i++) {
        if(frase[i] == ' ') {
            if(!espacio_anterior) {
                resultado[j] = ' ';
                j++;
                espacio_anterior = true;
            }
        } else {
            resultado[j] = frase[i];
            j++;
            espacio_anterior = false;
        }
    }
    resultado[j] = '\0';
    
    printf("frase: '%s'\n", resultado);
}