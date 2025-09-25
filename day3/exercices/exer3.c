
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void main()
{

    int repeteNumbers[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int digit;
    long n;

    printf("Entrez un nomber: ");
    scanf("%ld", &n);
    if (n <= 0)
    {
        printf("les nombers qu'ext inferieur ou equal zero, none accecptable");
        return;
    }

    while (n > 0)
    {

        digit = n % 10;
        repeteNumbers[digit] += 1;
        n /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ======> %d\n", i, repeteNumbers[i]);
    }

    return;
}
