
#include <stdio.h>

void main()
{
    int userNumber;
    char input[4];
    char extra[5];

    printf("Entrez une note numérique :");

    fgets(input, sizeof(input), stdin);

    int v = sscanf(input, "%d %c", &userNumber, &extra);
    if (v != 1)
    {
        printf("invalid number");
        return;
    }
    if (userNumber > 100 || userNumber <= 0)
    {
        printf("out of the range 0 to 100");
        return;
    }
    int decimal = (userNumber - (userNumber % 10)) / 10;
    switch (decimal)
    {
    case 10:
    case 9:
        printf("Note littérale : A");
        break;
    case 8:
        printf("Note littérale : B");
        break;
    case 7:
        printf("Note littérale : C");
        break;
    case 6:
        printf("Note littérale : D");
        break;
    default:
        printf("Note littérale : F");
        break;
    }
}