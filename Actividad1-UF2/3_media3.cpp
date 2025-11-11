#include <cstdio>

using namespace std;

void media3(float a, float b, float c) 
{
    float media = (a + b + c) / 3;
    printf("La media es: %f\n", media);
}

int main() 
{
    float num1, num2, num3;
    printf("Primer numero: ");
    scanf("%f", &num1);
    printf("Segundo numero: ");
    scanf("%f", &num2);
    printf("Tercer numero: ");
    scanf("%f", &num3);
    
    media3(num1, num2, num3);
}