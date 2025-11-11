#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int arr[]{1,2,3,4,5};
    int suma;
    int res;
    
    for (int i = 0; i < 5; i++)
    {
        suma = arr[i];
        res = suma + suma;
    }
    printf("%d", res);
    
}