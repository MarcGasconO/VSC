#include <cstdio>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    srand(time(NULL));
    
    const int SIZE = 10;
    const int TOTALNAVES = 9;
    
    char mapaReal[SIZE][SIZE];
    char mapaJugador[SIZE][SIZE];
    int intentos = 0;
    int impactos = 0;
	int navesColocadas = 0;
    
    for (int i = 0; i < SIZE; i++) 
	{
        for (int j = 0; j < SIZE; j++) 
		{
            mapaReal[i][j] = '-';
            mapaJugador[i][j] = '-';
        }
    }
    
    while (navesColocadas < TOTALNAVES) 
	{
        int fila = rand() % SIZE;
        int columna = rand() % SIZE;
        
        if (mapaReal[fila][columna] == '-') 
		{
            mapaReal[fila][columna] = 'N';
            navesColocadas++;
        }
    }
    
    while (impactos < TOTALNAVES) 
	{
        printf("\n  ");
        for (int j = 0; j < SIZE; j++) 
		{
            printf("%d ", j);
        }
        printf("\n");
        
        for (int i = 0; i < SIZE; i++) 
		{
            printf("%d ", i);
            for (int j = 0; j < SIZE; j++) 
			{
                printf("%c ", mapaJugador[i][j]);
            }
            printf("\n");
        }
        
        int fila, columna;
        scanf("%d %d", &fila, &columna);
        
        if (fila < 0 && fila >= SIZE && columna < 0 && columna >= SIZE) 
		{
            continue;
        }
        
        if (mapaJugador[fila][columna] != '-') 
		{
            continue;
        }
        
        intentos++;
        
        if (mapaReal[fila][columna] == 'N') 
		{
            mapaJugador[fila][columna] = 'X';
            impactos++;

        } 
		else 
		{
            mapaJugador[fila][columna] = 'O';
        }
    }
}