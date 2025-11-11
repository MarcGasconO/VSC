#include <cstdio>
using namespace std;

void Par();

int main()
{
    int valor;
    printf("numero");
    scanf("%d\n", Par(valor));
    printf("%d", Par);
}

void Par(int valor)
{
    if (valor % 2 == 0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    
}