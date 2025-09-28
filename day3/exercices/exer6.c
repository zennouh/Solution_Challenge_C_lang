
#include <stdio.h>
#include <ctype.h>

char getNumbersyn(char c);

void main()
{
    char input[50];
    printf("enter your word: ");
    fgets(input, sizeof(input), stdin);

    for (int i = 0; input[i] != '\0'; i++)
    {

        char element = input[i];
        char result = getNumbersyn(toupper(element));
        printf("%c", result);
    }
}

char getNumbersyn(char c)
{

    switch (c)
    {
    case 'A':
        return '4';
    case 'B':
        return '8';
    case 'E':
        return '3';
    case 'I':
        return '1';
    case 'O':
        return '0';
    case 'S':
        return '5';
    default:
        return c;
    }
}