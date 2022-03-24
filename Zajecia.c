#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *plik = 0;
    char bufor[256];
    char z;

    plik = fopen("zajecia.txt", "r");
    if (!plik)
    {
        exit(-1);
    }

    while (fgets(bufor, 256, plik))
    {
        printf("%s", bufor);
    }
    fclose(plik);
    return 0;
}
