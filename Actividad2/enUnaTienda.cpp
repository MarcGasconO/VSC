#include <cstdio>
using namespace std;

int main()
{
    int colorBola;
    float totalCompra;
    float descuento;
    float total;
    
    printf("Total de la compra: ");
    scanf("%f", &totalCompra);
    printf("Color de la bola 1-5: ");
    scanf("%d", &colorBola);
    
    if(colorBola == 1)
    {
        descuento = 0.0;
        printf("Bola Blanca = 0% \n");
    }
    else if(colorBola == 2)
    {
        descuento = 0.10;
        printf("Bola verde = 10% \n");
    }
    else if(colorBola == 3)
    {
        descuento = 0.25;
        printf("Bola amarilla = 25% \n");
    }
    else if(colorBola == 4)
    {
        descuento = 0.50;
        printf("Bola azul = 50% \n");
    }
    else if(colorBola == 5)
    {
        descuento = 1.0;
        printf("Bola roja = 100% \n");
    }
    
    total = totalCompra - (totalCompra * descuento);
    printf("Total: %.2f€\n", total);
    
}