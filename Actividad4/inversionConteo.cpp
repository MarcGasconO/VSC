#include <cstdio>
using namespace std;

int main() {
    int vector[6];
    int pares = 0;
    
    printf("6 numeros:\n");
    for(int i = 0; i < 6; i++) 
    {
        printf("Elemento %d: ", i);
        scanf("%d", &vector[i]);
    }
    
    printf("original: ");
    for(int i = 0; i < 6; i++) 
    {
        printf("%d", vector[i]);
    }
    
    for(int i = 0; i < 3; i++) 
    {
        int temp = vector[i];
        vector[i] = vector[5 - i];
        vector[5 - i] = temp;
    }
    
    for(int i = 0; i < 6; i++) 
    {
        if(vector[i] % 2 == 0) 
        {
            pares++;
        }
    }
    
    printf("Vector invertido: ");
    for(int i = 0; i < 6; i++) 
    {
        printf("%d", vector[i]);
    }

    printf("numeros pares: %d\n", pares);
}
