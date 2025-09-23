

#include <stdio.h>

void main()
{
    char input[10];

    int x;

    printf("donner le valeur de x: ");

    while (1)
    {
        fgets(input, sizeof(input), stdin);

        int v = sscanf(input, "%d", &x); // 3 . 4

        if (v != 1)
        {
            printf("valeur incorrecte, donner un entier positif svp: ");
            continue;
        }
        else
        {
            int value = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;

            printf("le valeur  est: %d\n", value);

            break;
        }
    }
}