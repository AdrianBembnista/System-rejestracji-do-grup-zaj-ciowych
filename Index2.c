#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba;
    char log[5],passwd[5];
    printf("\n Podaj numer operacji ktora chcesz wykonac\n 1.Logowanie \n 2.Rejestracja \n");
    scanf("%d", &liczba);

    switch( liczba)
    {
        case 1:
        {
            printf("\nPodaj login: ");
            scanf("%s",log);
            printf("\nPodaj haslo: ");
            scanf("%s",passwd);

            FILE *plik1, *plik2;
            if ((plik1 = fopen ("loginy.txt","r")) ==NULL)
            {
                printf("Cos poszlo nie tak");
                exit(1);
            }
            if ((plik2 = fopen ("hasla.txt","r")) ==NULL)
            {
                printf("Cos poszlo nie tak");
                exit(1);
            }

            char login[10], password[10];
            fscanf(plik1,"%s",&login);
            printf("%s",login);
            printf("%s",log);

            fscanf(plik2,"%s ",&password);
            printf("%s",password);



            if ((log != login)&&(passwd != passwd))
            {
                printf("\nPodano zle dane");

            }
            else
            {
                printf("\nUda³o siê zalogoawæ.\nPodaj do jakiej grupy zajeciowej chcesz dolaczyc");
            }

        fclose(plik1);
            fclose(plik2);
        }

        break;

        case 2:
        {
            printf("\nPodaj login: ");
            scanf("%s",log);
            printf("\nPodaj haslo: ");
            scanf("%s",passwd);

            FILE *plik1, *plik2;
            if ((plik1 = fopen ("loginy.txt","w+")) ==NULL)
            {
                printf("Cos poszlo nie tak");
                exit(1);
            }
            if ((plik2 = fopen ("hasla.txt","w+")) ==NULL)
            {
                printf("Cos poszlo nie tak");
                exit(1);
            }
            fprintf(plik1,"%s",log);
            fprintf(plik2,"%s",passwd);
            fclose(plik1);
            fclose(plik2);
            break;
        }

        default :
            {
                printf(" Nieprawidlowe dane");
            }

    }

return 0;
}
