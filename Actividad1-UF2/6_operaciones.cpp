#include <cstdio>
#include <cmath>

using namespace std;

float suma(float a, float b) 
{
    return a + b;
}

float resta(float a, float b) 
{
    return a - b;
}

float multiplicacion(float a, float b) 
{
    return a * b;
}

float division(float a, float b) 
{
    return a / b;
}

int main() 
{
    float num1, num2;
    printf("Primer numero: ");
    scanf("%f", &num1);
    printf("Segundo numero: ");
    scanf("%f", &num2);

    printf("Suma: %f\n", suma(num1, num2));
    printf("Resta: %f\n", resta(num1, num2));
    printf("Multiplicacion: %f\n", multiplicacion(num1, num2));
    printf("Division: %f\n", division(num1, num2));

}