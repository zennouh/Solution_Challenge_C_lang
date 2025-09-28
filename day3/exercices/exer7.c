
#include <stdio.h>

void main()
{
    int matrix[5][5] = {
        {8, 9, 4, 2, 56},
        {6, 49, 24, 62, 6},
        {55, 22, 33, 1, 9},
        {5, 77, 45, 82, 9},
        {8, 65, 12, 78, 55},
    };

    for (int i = 0; i < 5; i++)
    {
        int somme = 0;
        printf("la lign %d est: ", i + 1);
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matrix[i][j]);
            somme += matrix[i][j];
        }
        printf(". somme = %d", somme);
        printf("\n");
    }
}