#include <cstdio>

using namespace std;

float media2(float a, float b) 
{
    return (a + b) / 2;
}

int main() 
{
    float num1, num2;
    printf("Primer numero: ");
    scanf("%f", &num1);
    printf("Segundo numero: ");
    scanf("%f", &num2);
    
    printf("La media de %f y %f es: %f\n", num1, num2, media2(num1, num2));
    
}