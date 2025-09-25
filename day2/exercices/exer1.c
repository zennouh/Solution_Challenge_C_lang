
#include <stdio.h>
#include <string.h>

void main()
{

    char ISBN[100];

    char prefix[10];
    char groupe[10];
    char codeEditeur[10];
    char numArticle[10];
    char chifferDeControle[10];

    printf("enter le l'isbn:");
    do
    {

        fgets(ISBN, sizeof(ISBN), stdin);
        if (strlen(ISBN) != 17)
        {
            printf("isbn non valide, try aggain: \n");
            continue;
        }
        else
        {
            int v = sscanf(ISBN, "%10s-%10s-%10s-%10s-%10s", &prefix, &groupe, &codeEditeur, &numArticle, &chifferDeControle);
            if (v != 5)
            {
                printf("l' isbn n'est pas valid\n");
                continue;
            }
            printf("Préfixe GS1: %s\nIdentifiant de groupe: %s\nCode de l'éditeur:%s\nNuméro d'article: %s\nChiffre de controle: %s", prefix, groupe, codeEditeur, numArticle, chifferDeControle);
            break;
        }
    } while (1);
}