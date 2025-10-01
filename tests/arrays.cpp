#include <cstdio>
#include <math.h>
using namespace std;

#define TOTALALUMNES 5

int main()
{
    float alumnes[TOTALALUMNES];
    float media = 0;
    
    for(int i = 0; i < TOTALALUMNES; i++)
    {
        printf("la nota del %d alumne es: \n", i+1);
        scanf("%f", &alumnes[i]);
    }
    for(int i = 0; i < TOTALALUMNES; i++)
    {
        media = media + alumnes[i];
    }
    printf("%f", media / TOTALALUMNES);
}