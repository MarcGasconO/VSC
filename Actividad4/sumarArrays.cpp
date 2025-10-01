#include <cstdio>
using namespace std;
#include <math.h>

int main()
{
    int arr[] = {1,2,3,4,5};
    int x;

    for(int i = 0; i < 5; i++)
    {
        x = x + arr[i];
    }
    printf("%d", x);
}