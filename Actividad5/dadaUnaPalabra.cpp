#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    char palabra[100];
    char palabraReves[100];

    printf("Dame una palabra: ");
    scanf("%s", palabra);
    
    int longitud = strlen(palabra);
    
    for(int i = 0; i < longitud; i++) 
    {
        palabraReves[i] = palabra[longitud - 1 - i];
    }
    palabraReves[longitud] = '\0';
    
    printf("La palabra al revés es: %s\n", palabraReves);
    
    bool palindroma = true;
    for(int i = 0; i < longitud / 2; i++) 
    {
        if(palabra[i] != palabra[longitud - 1 - i]) 
        {
            palindroma = false;
            break;
        }
    }
    
    if(palindroma) 
    {
        printf("La palabra es palíndroma\n");
    } 
    else 
    {
        printf("La palabra no es palíndroma\n");
    }
}