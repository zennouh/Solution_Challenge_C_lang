
#include <stdio.h>
#include <string.h>

void main()
{

    char input[18];

    char prefix[4];
    char groupe[2];
    char codeEditeur[4];
    char numArticle[6];
    char chifferDeControle[2];
    printf("enter le l'isbn:");
    do
    {

        fgets(input, sizeof(input), stdin);
        if (strlen(input) != 17)
        {
            printf("isbn non valide, try aggain: \n");
            continue;
        }
        else
        {
            int v = sscanf(input, "%3s-%1s-%3s-%5s-%1s", &prefix, &groupe, &codeEditeur, &numArticle, &chifferDeControle);
            if (v != 5)
            {
                printf("l' isbn n'est pas valid\n");
                continue;
            }
            printf("Préfixe GS1: %s\nIdentifiant de groupe: %s\nCode de l'éditeur:%s\nNuméro d'article: %s\nChiffre de contrôle: %s", prefix, groupe, codeEditeur, numArticle, chifferDeControle);
            break;
        }
    } while (1);
}