#include <stdio.h>

int main(){

    int num1;
    int num2;
    int res;

    printf("Año de actual\n");
    scanf("%d", &num1);
    printf("Año de nacimiento\n");
    scanf("%d", &num2);
    res = num1 - num2;
    printf("%d\n"res);

}
