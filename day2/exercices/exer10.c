#include <stdio.h>
#include <ctype.h> // for toupper

// Function to get scrabble value of a letter
int getNumber(char c)
{
    c = toupper(c);
    switch (c)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'L':
    case 'N':
    case 'O':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
        return 1;
    case 'D':
    case 'G':
        return 2;
    case 'B':
    case 'C':
    case 'M':
    case 'P':
        return 3;
    case 'F':
    case 'H':
    case 'V':
    case 'W':
    case 'Y':
        return 4;
    case 'K':
        return 5;
    case 'J':
    case 'X':
        return 8;
    case 'Q':
    case 'Z':
        return 10;
    default:
        return 0; // non-letter characters worth 0
    }
}

int main()
{
    char word[100];
    int score = 0;

    printf("Enter a word: ");
    int v = scanf("%s", word);
    if (v == 1)
    {
        for (int i = 0; word[i] != '\0'; i++)
        {
            score += getNumber(word[i]);
        }
        printf("Scrabble value is: %d\n", score);
    }

    return 0;
}
