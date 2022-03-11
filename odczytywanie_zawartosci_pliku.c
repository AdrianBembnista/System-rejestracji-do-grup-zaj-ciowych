#include <stdio.h>
#include <stdlib.h>
//program wyœwietla liczbe zapisana w pliku

int main()
{
    FILE *plik;
    if ((plik = fopen ("liczba.txt","r")) ==NULL)
    {
        printf("Cos poszlo nie tak");
        exit(1);
    }
    int liczba;
    fscanf(plik,"%d",&liczba);
    printf("%d",liczba);
    fclose(plik);

    return 0;
}
