#include <cstdio>
using namespace std;

int main() {
    int vector[4];
    
    printf("4 numeros:\n");
    for(int i = 0; i < 4; i++) 
    {
        printf("Elemento %d: ", i);
        scanf("%d", &vector[i]);
        
        if(vector[i] > 10) 
        {
            vector[i] = vector[i] * 2;
        }
    }
    
    printf("resultado");
    for(int i = 0; i < 4; i++) 
    {
        printf("%d", vector[i]);
    }
}