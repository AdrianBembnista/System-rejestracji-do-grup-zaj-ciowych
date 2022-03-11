#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tekst[] = "Hello World!";

    FILE *plik;
    if ((plik = fopen ("login.txt","w")) ==NULL)
    {
        printf("Cos poszlo nie tak");
        exit(1);
    }
    fprintf(plik,"s%",tekst);
    fclose(plik);

    return 0;
}
