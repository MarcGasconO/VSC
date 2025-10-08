#include <cstdio>
using namespace std;
#include <math.h>

int main()
{
    int arr[] = {3,5,7,2,8};
    int x;

    for(int i = 0; i < 5; i++)
    {
        x = arr[i];
        if(arr[i] > x)
        {
            printf("%d", x);
        }
        
    }
}