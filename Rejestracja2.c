#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Nadawanie nazwy */
    FILE *fp; /* używamy metody wysokopoziomowej - musimy mieć zatem identyfikator pliku, uwaga na gwiazdkę! */
    FILE *fp2;
    /*tekst, który zostanie dodany do wskazanego pliku, trzeba określić ilość znaków*/
    char login[10], haslo[10];
    printf("Podaj login: ");
    scanf("%s", login);
    printf("Podaj haslo: ");
    scanf("%s", haslo);

    /*Jeżeli nie uda się uzyskać dostępu do pliku zostanie wyświetlony komunikat*/
    if ((fp = fopen("login.txt", "w")) == NULL)
    {
        printf("Nie mogę otworzyć pliku login.txt do zapisu!\n");
        exit(1);
    }
    if ((fp2 = fopen("halso.txt", "w")) == NULL)
    {
        printf("Nie mogę otworzyć pliku haslo.txt do zapisu!\n");
        exit(1);
    }
    fprintf(fp, "%s", login); /* zapisz nasz łańcuch w pliku */
    fprintf(fp2, "%s", haslo);
    fclose(fp);
    fclose(fp2); /* zamknij plik */
    return 0;
}