#include <cstdio>
using namespace std;
#include <math.h>

int main()
{
    int arr[] = {1,2,3,4,5};

    for(int i = 4; i >= 0; i--)
    {
        printf("%d,", arr[i]);
    }
}