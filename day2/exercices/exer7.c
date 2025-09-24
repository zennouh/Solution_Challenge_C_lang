#include <stdio.h>
#include <string.h>

void main()
{
    int numberone, numbertwo;
    char input[4];
    printf("Enter a fraction (a/b): ");
    fgets(input, 4, stdin);
    int v = sscanf(input, "%d/%d", &numberone, &numbertwo);
    if (v == 2)
    {
        int gcd = 1;
        printf("numberone = %d, numbertwo = %d\n", numberone, numbertwo);
        int min = numberone < numbertwo ? numberone : numbertwo;
        for (int i = 1; i <= min; i++)
        {
            if (numberone % i == 0 && numbertwo % i == 0)
            {
                gcd = i;
            }
        }
        numberone = numberone / gcd;
        numbertwo = numbertwo / gcd;
        printf("Reduced fraction: %d/%d\n", numberone, numbertwo);
    }
}