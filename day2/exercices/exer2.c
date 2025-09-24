

#include <stdio.h>
#include <string.h>

void main()
{
    int number;
    char input[3];
    printf("Entrez un nombre à deux chiffres : ");

    fgets(input, sizeof(input), stdin);
    // int size = strlen(input);

    // printf("size: %d\n", size);

    int v = sscanf(input, "%d", &number);
    printf("v : %d\n", v);
    if (v != 1)
    {
        printf("invalide number");
        return;
    }

    if (number < 10)
    {
        printf("s'il vous plais, enter number de deux chiffres\n");
        return;
    }

    int firstOne = number % 10;
    int second = (number - firstOne) / 10;
    int invers = (firstOne * 10) + second;
    printf("Le nombre inversé est : %d", invers);
}