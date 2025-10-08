#include <cstdio>
using namespace std;

int main() {
    int vec1[10]; 
    int vec2[10]; 
    int vec3[10];
    
    printf("Primer vector(10 elementos):\n");
    for(int i = 0; i < 10; i++) {
        printf("vector1[%d]: ", i);
        scanf("%d", &vec1[i]);
    }
    
    printf("Segundo vector(10 elementos):\n");
    for(int i = 0; i < 10; i++) 
    {
        printf("vector2[%d]: ", i);
        scanf("%d", &vec2[i]);
    }
    
    for(int i = 0; i < 10; i++) 
    {
        if(vec1[i] > vec2[i]) 
        {
            vec3[i] = vec1[i] + vec2[i];
        } 
        else 
        {
            vec3[i] = vec1[i] - vec2[i];
        }
    }

    printf("vector1: \n");
    for(int i = 0; i < 10; i++) printf("%3d ", vec1[i]);
    
    printf("vector2: \n");
    for(int i = 0; i < 10; i++) printf("%3d ", vec2[i]);
    
    printf("vector3: \n");
    for(int i = 0; i < 10; i++) printf("%3d ", vec3[i]);
}