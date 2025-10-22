#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    char frase[1000];
    int contadores[5] = {0};
    char vocales[5] = {'a', 'e', 'i', 'o', 'u'};
    int total_caracteres;
    
    printf("frase: ");
    fgets(frase, 1000, stdin);
    
    total_caracteres = strlen(frase);
    
    for(int i = 0; i < total_caracteres; i++) 
    {
        char c = frase[i];
        for(int j = 0; j < 5; j++) 
        {
            if(c == vocales[j]) 
            {
                contadores[j]++;
                break;
            }
        }
    }

    for(int i = 0; i < 5; i++) 
    {
        if(contadores[i] > 0) 
        {
            printf("La letra %c aparece %d\n", vocales[i], contadores[i]);
        }
    }
}