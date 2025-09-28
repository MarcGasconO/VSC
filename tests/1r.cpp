#include <stdio.h>

int main()
{
    char verMundo;
    printf("Dime si quieres ver el mundo: S o N\n");
    scanf("%c", &verMundo);


    if(verMundo == 'S')
    {

    
        printf("Hello World");

    }
    else
    {
        printf("Bye World");
    }
}