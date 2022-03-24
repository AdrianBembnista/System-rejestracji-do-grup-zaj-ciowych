#include <stdio.h>
int main()
{
    char login[10],log[10]="log";
    int x;

    printf("Login: ");
    scanf("%s",login);

    for(int i=0;i<=10;i++)
    {
        if (log[i]==login[i])
        {
            x++;

        }


    }
    if(x==9)
    {
        printf("Zalogowano");
    }
    else
    {
        printf("Nieprawidlowe dane");
    }


 printf("%d",x);

}
