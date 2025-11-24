#include <cstdio>
#include <cmath>

using namespace std;

void operacion(int n1, int n2, char oper, float* resul, int *errorCode);
int menu();
long long calcularFactorial(int n);
void ejercicio1();
void ejercicio2();
void ejercicio3();

void operacion(int n1, int n2, char oper, float* resul, int *errorCode) {
    *errorCode = 1;
    switch (oper) {
        case '+': *resul = (float)n1 + n2; break;
        case '-': *resul = (float)n1 - n2; break;
        case '*': *resul = (float)n1 * n2; break;
        case '/':
            if (n2 != 0) {
                *resul = (float)n1 / n2;
            } else {
                *errorCode = -1;
            }
            break;
        case '^': *resul = pow((double)n1, (double)n2); break;
        default: *errorCode = -1; break;
    }
}

int menu() {
    char choiceChar;
    printf("\n+ --> Sumar\n- --> Restar\n* --> Multiplicar\n/ --> Dividir\n^ --> Potencia\n! --> Factorial\ns --> Salir\nElija opcion: ");
    scanf(" %c", &choiceChar);
    switch (choiceChar) {
        case '+': return 1;
        case '-': return 2;
        case '*': return 3;
        case '/': return 4;
        case '^': return 5;
        case '!': return 6;
        case 's': return 0;
        default: return -1;
    }
}

long long calcularFactorial(int n) {
    if (n < 0) return -1;
    if (n == 0) return 1;
    long long factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    return factorial;
}

void ejercicio1() {
    int num1, num2, errorCode;
    char operacionChar;
    float resultado;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("Ingrese la operacion (+, -, *, /, ^): ");
    scanf(" %c", &operacionChar);

    operacion(num1, num2, operacionChar, &resultado, &errorCode);

    if (errorCode == 1) {
        printf("El resultado de %d %c %d es: %.2f\n", num1, operacionChar, num2, resultado);
    } else {
        printf("Error en la operacion. Codigo de error: %d\n", errorCode);
    }
}

void ejercicio2() {
    int opcion, num1, num2, errorCode;
    float resultado;

    do {
        opcion = menu();
        if (opcion >= 1 && opcion <= 5) {
            printf("Ingrese el primer numero: ");
            scanf("%d", &num1);
            printf("Ingrese el segundo numero: ");
            scanf("%d", &num2);
            
            char opChar = "+-*/^"[opcion - 1];
            operacion(num1, num2, opChar, &resultado, &errorCode);

            if (errorCode == 1) {
                printf("El resultado es: %.2f\n", resultado);
            } else {
                printf("Error en la operacion.\n");
            }
        } else if (opcion == 0) {
            printf("Saliendo\n");
        } else {
            printf("Opcion no valida.\n");
        }
    } while (opcion != 0);
}

void ejercicio3() {
    int opcion, num1, num2, errorCode;
    float resultado;

    do {
        opcion = menu();
        if (opcion >= 1 && opcion <= 5) {
            printf("Ingrese el primer numero: ");
            scanf("%d", &num1);
            printf("Ingrese el segundo numero: ");
            scanf("%d", &num2);

            char opChar = "+-*/^"[opcion - 1];
            operacion(num1, num2, opChar, &resultado, &errorCode);

            if (errorCode == 1) {
                printf("El resultado es: %.2f\n", resultado);
            } else {
                printf("Error en la operacion.\n");
            }
        } else if (opcion == 6) {
            printf("Ingrese el primer numero: ");
            scanf("%d", &num1);
            printf("Ingrese el segundo numero: ");
            scanf("%d", &num2);
            printf("El factorial de %d es %lld\n", num1, calcularFactorial(num1));
            printf("El factorial de %d es %lld\n", num2, calcularFactorial(num2));
        } else if (opcion == 0) {
            printf("Saliendo\n");
        } else {
            printf("Opcion no valida.\n");
        }
    } while (opcion != 0);
}

int main() {
    //ejercicio1();
    //ejercicio2();
    ejercicio3();

    return 0;
}
