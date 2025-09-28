#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char input[] = "you can cage a swallow can't you?";
    char sentence[200];
    char terminator;
    int len = strlen(input);

    int i;
    for (i = 0; i < len; i++)
    {
        if (input[i] == '.' || input[i] == '?' || input[i] == '!')
        {
            terminator = input[i];
            break;
        }
        sentence[i] = input[i];
    }
    sentence[i] = '\0';

    printf("Original: %s%c\n", sentence, terminator);

    // 2. Reverse word order
    printf("Inversion : ");
    int end = strlen(sentence);

    for (int j = end - 1; j >= 0; j--)
    {
        if (sentence[j] == ' ' || j == 0)
        {
            int start = (j == 0) ? 0 : j + 1;
            for (int k = start; k < end; k++)
            {
                printf("%c", sentence[k]);
            }
            if (j > 0)
                printf(" ");
            end = j;
        }
    }

    printf("%c\n", terminator);
    return 0;
}
