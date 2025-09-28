#include <cstdio>
using namespace std;

int main()
{
    int horas;
    const float precioHora = 20;
    float pago;
    
    printf("Horas trabajadas: ");
    scanf("%d", &horas);

    if(horas > 40)
    {
        pago = (40 * precioHora) + ((horas - 40) * precioHora * 2);
    } 
    else
    {
        pago = horas * precioHora;
    }
    
    printf("Pago total: %.2f€\n", pago);
    
}
