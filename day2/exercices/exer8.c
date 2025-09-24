
#include <stdio.h>
#include <string.h>

void main()
{
    int number;
    char input[4];
    char extras[4];
    printf("Enter a Number: ");
    fgets(input, 4, stdin);
    int v = sscanf(input, "%d %c", &number, &extras);
    if (v != 1)
    {
        printf("invalid input");
        return;
    }
    for (int i = 1; i < number; i++)
    {
        int carre = i * i;
        if (carre <= number)
        {
            printf("%d\n", carre);
        }
        else
        {
            return;
        }
    }
}