#include <cstdio>
using namespace std;

int main() {
    int vec1[3]; 
    int vec2[3];
    int producto = 0;
    
    printf("Primer vector(3 numeros): \n");
    for(int i = 0; i < 3; i++) 
    {
        printf("vector1[%d]: ", i);
        scanf("%d", &vec1[i]);
    }
    
    printf("Segundo vector(3 numeros):\n");
    for(int i = 0; i < 3; i++) 
    {
        printf("vector2[%d]: ", i);
        scanf("%d", &vec2[i]);
    }
    
    for(int i = 0; i < 3; i++) 
    {
        producto += vec1[i] * vec2[i];
    }
    
    printf("Producto escalar: %d\n", producto);
}