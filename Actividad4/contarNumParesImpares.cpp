#include <cstdio>
using namespace std;
#include <math.h>

int main()
{
    int arr[] = {1,2,3,4,5};
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("pares %d\n", arr[i]);
        }
        else
        {
            printf("impares %d\n", arr[i]);
        }
    }
}