
#include <stdio.h>

//Prawid³owe haslo przyjmuje wartosc 7.

int main()
{
    char login[10],log[10];
    char haslo[10],pass[10];
    int l=0,h=0;


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
    fscanf(plik,"%s",&log);
    printf("Pobrany login: %s\n",log);
    fclose(plik);



    printf("Login: ");
    scanf("%s",login);
    printf("Haslo: ");
    scanf("%s",haslo);

    for(int i=1;i<=10;i++)
    {
        if (log[i]==login[i])
        {
            l++;
        }
    }
    for(int i=1;i<=10;i++)
    {
        if (haslo[i]==pass[i])
        {
            h++;
        }
    }

    printf("L wynosi: %d\n",l);
    printf("h wynosi: %d\n",h);

    if((l==9)&&(h==7))
    {
        printf("Zalogowano");
    }
    else
    {
        printf("Nieprawidlowe dane");
    }




}
