
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// char *tableToString(int *t, char *result);
int isExiste(int digit, int *alreadyTable);
void main()
{
    // 939577
    bool digit_seen[20] = {false};
    int alreadyHaveSeen[20];
    int digit;
    long n;

    printf("Entrez un nomber: ");
    scanf("%ld", &n);
    int index = 0;
    while (n > 0)
    {

        digit = n % 10; // 3
        if (digit_seen[digit])
        {
            int isExiste = 0;
            for (int i = 0; i < index; i++)
            {
                if (alreadyHaveSeen[i] == digit)
                {
                    isExiste = 1;
                    break;
                }
            }
            if (!isExiste)
            {
                alreadyHaveSeen[index] = digit;
                index++;
                printf("elements is: %d\n", digit);
            }
        }
        else
        {
            digit_seen[digit] = true;
        }

        n /= 10;
        // if (n < 0)
        // {
        //     alreadyHaveSeen[index] = '\0';
        // }
    }

    // printf("les chiffers soit: ");
    // for (int i = 0; alreadyHaveSeen[i] != '\0'; i++)
    // {
    //     printf("%d ", alreadyHaveSeen[i]);
    // }

    return;
}

// char *tableToString(int *t, char *result)
// {
//     char buffer[2];

//     for (int i = 0; t[i] != '\0'; i++)
//     {
//         sprintf(buffer, "%d, ", t[i]);
//         strcat(result, buffer);
//     }
// }

int isExiste(int digit, int *alreadyTable)
{
}