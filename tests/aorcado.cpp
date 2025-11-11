#include <cstdio>
using namespace std;

int main() 
{
    int matriz[3][3];
    int suma = 0;
    
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("x: %d y: %d ", x + 1, y + 1);
            scanf("%d", &matriz[x][y]);
        }
        
    }
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("%d\t", matriz[x][y]);
        }
        printf("\n");
        
    }
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            suma += matriz[x][y];
        }
        printf("%d %d\n", x + 1, suma);
    }
    
}