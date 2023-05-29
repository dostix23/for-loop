#include <stdio.h>
#include <string.h>
int main ()
{
    char kette[30];
    strcpy(kette, "Hello World");

    int zahl;
    for (zahl=0;zahl<30;zahl++)
    {
        printf(" %s \n", kette[zahl]);
    }
    return 0;
}
