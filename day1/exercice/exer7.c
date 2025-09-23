

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
            int value1 = x / 20;        // 4
            int v1 = x - (value1 * 20); // 13

            int value2 = v1 / 10;        // 1
            int v2 = v1 - (value2 * 10); // 3

            int value3 = v2 / 5;        // 0
            int v3 = v2 - (value3 * 5); // 3

            int value4 = v3 / 1;
            int v4 = v3 - (value4 * 1); // 0

            printf("Billets de 20$:  %d\n", value1);
            printf("Billets de 10$:  %d\n", value2);
            printf("Billets de 5$:  %d\n", value3);
            printf("Billets de 1$:  %d\n", value4);

            break;
        }
    }
}