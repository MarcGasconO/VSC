#include <cstdio>
using namespace ::std;

int main()
{
    int i = 0;
    
    while(i <= 100)
    {
        if(i % 5 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }

}