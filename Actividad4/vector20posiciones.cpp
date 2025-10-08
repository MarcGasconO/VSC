#include <cstdio>
using namespace std;

int main() {
    int x[20];
    int suma = 0;
    int mayor;
    int posMayor;
    
    printf("20 numeros:\n");
    for(int i = 0; i < 20; i++) {
        printf("Posición %d: ", i);
        scanf("%d", &x[i]);
    }
    
    mayor = x[0];
    posMayor = 0;
    
    for(int i = 0; i < 20; i++) {
        suma += x[i];
        if(x[i] > mayor) {
            mayor = x[i];
            posMayor = i;
        }
    }
    
    printf("Suma: %d\n", suma);
    printf("Mayor valor: %d\n", mayor);
    printf("Posición del valor: %d\n", posMayor);
    
}