#include <cstdio>
using namespace std;

int main() {
    int vec1[12];
    int vec2[12];
    int vec3[12];
    
    printf("12 numeros:\n");
    for(int i = 0; i < 12; i++) 
    {
        printf("Posición %d: ", i);
        scanf("%d", &vec1[i]);
    }
    
    for(int i = 0; i < 12; i++) 
    {
        vec2[i] = vec1[11 - i];
    }
    
    for(int i = 0; i < 12; i++) 
    {
        if(vec1[i] > 5) {
            vec3[i] = -1;
        } 
        else 
        {
            vec3[i] = vec1[i];
        }
    }
    
    printf("Vector1: ");
    for(int i = 0; i < 12; i++) 
    {
        printf("%d", vec1[i]);
    }
    
    printf("Vector2: ");
    for(int i = 0; i < 12; i++) 
    {
        printf("%d", vec2[i]);
    }
    
    printf("Vector3: ");
    for(int i = 0; i < 12; i++) 
    {
        printf("%d", vec3[i]);
    }

}