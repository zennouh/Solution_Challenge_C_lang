
#include <stdio.h>

void main()
{

    int firstNumber, secondNumber;
    char input[20];
    char extra[5];
    printf("Entrez deux nombres entiers  :");
    fgets(input, sizeof(input), stdin);
    int v = sscanf(input, "%d %d", &firstNumber, &secondNumber);
    printf("v=%d\n", v);

    if (v != 2)
    {
        printf("invalid input");
        return;
    }
    int min = firstNumber > secondNumber ? secondNumber : firstNumber;
    int gcd = 1;
    for (int i = 1; i <= min; i++)
    {
        if (firstNumber % i == 0 && secondNumber % i == 0)
        {
            gcd = i;
        }
    }
    printf("Gcd is : %d", gcd);
}