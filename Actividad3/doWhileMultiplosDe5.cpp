#include <cstdio>
using namespace ::std;

int main()
{
    int i = 0;
    
    do {
        if(i % 5 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    } while(i <= 100);

}