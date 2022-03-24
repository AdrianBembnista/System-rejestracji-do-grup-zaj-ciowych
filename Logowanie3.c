#include <stdio.h>

//Prawid³owe haslo przyjmuje wartosc 7.

int main()
{
    char login[10],log[10]="log";
    char haslo[10],pass[10]="cba";
    int l=0,h=0;

    printf("Login: ");
    scanf("%s",login);
    printf("Haslo: ");
    scanf("%s",haslo);

    for(int i=0;i<=10;i++)
    {
        if (log[i]==login[i])
        {
            l++;
        }
    }
    for(int i=0;i<=10;i++)
    {
        if (haslo[i]==pass[i])
        {
            h++;
        }
    }

    printf("L wynosi: %d\n",l);
    printf("h wynosi: %d\n",h);

    if((l==10)&&(h==7))
    {
        printf("Zalogowano");
    }
    else
    {
        printf("Nieprawidlowe dane");
    }




}
