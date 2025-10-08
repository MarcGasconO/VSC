#include <cstdio>
using namespace std;

int main() {
    int vector[6];
    int menor; 
    int mayor;
    
    printf("5 numeros:\n");
    for(int i = 0; i < 5; i++) 
    {
        printf("Elemento %d: ", i);
        scanf("%d", &vector[i]);
    }

    menor = mayor = vector[0];
    for(int i = 1; i < 5; i++) 
    {
        if(vector[i] < menor) menor = vector[i];
        if(vector[i] > mayor) mayor = vector[i];
    }
    
    printf("Valor menor: %d\n", menor);
    printf("Valor mayor: %d\n", mayor);
    
    vector[5] = menor + mayor;
    
    printf("Vector final: ");
    for(int i = 0; i < 6; i++) 
    {
        printf("%d", vector[i]);
    }

}