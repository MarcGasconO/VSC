#include <cstdio>
#include <string.h>
using namespace std;

int main()
{
    char sentencia[100];
    printf("frase\n");
    getline(sentencia);
    printf("%s\n", sentencia);
    for(int i = 0; i <= strlen(sentencia)-1; i++)
    {
        printf("_%c_", sentencia[i]);
    }
}