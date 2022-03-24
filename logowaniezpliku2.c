#include <stdio.h>




int main()
{
    char login[10],log[10];
    char haslo[10],pass[10];


    FILE *plik, *plik2;
    if ((plik = fopen ("login.txt","r")) ==NULL)
    {
        printf("Cos poszlo nie tak");
        exit(1);
    }
    fscanf(plik,"%s",log);
    printf("Pobrany login: %s\n",log);
    fclose(plik);


    if ((plik = fopen ("haslo.txt","r")) ==NULL)
    {
        printf("Cos poszlo nie tak");
        exit(1);
    }
    fscanf(plik,"%s",&pass);
    printf("Pobrany haslo: %s\n",pass);


    printf("Login: ");
    scanf("%s",login);
    printf("Haslo: ");
    scanf("%s",haslo);


if((strcmp(log,login)==0)&&(strcmp(pass,haslo)==0))
{
    printf("zalogowano");
}
}
