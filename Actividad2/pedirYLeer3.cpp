#include <cstdio>
using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;
    int x;
    
    printf("Primer numero: ");
    scanf("%d", &num1);
    printf("Segundo numero: ");
    scanf("%d", &num2);
    printf("Tercer numero: ");
    scanf("%d", &num3);

    x = num1;
    if(num2 > x)
    {
        x = num2;
    }
    if(num3 > x)
    {
        x = num3;
    }
    printf("El numero mas grande es: %d\n", x);
    
}