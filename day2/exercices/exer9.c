

#include <stdio.h>
#include <ctype.h>

char letterToDigit(char c);

void main()
{

    char phone[100];

    printf("Enter a phone number: ");
    fgets(phone, sizeof(phone), stdin);

    for (int i = 0; phone[i] != '\0'; i++)
    {
        char c = phone[i];
        if (isalpha(c))
        {
            c = toupper(c);
            phone[i] = letterToDigit(c);
        }
    }
    printf("Numeric phone number: %s", phone);

    return;
}

char letterToDigit(char c)
{
    switch (c)
    {
    case 'A':
    case 'B':
    case 'C':
        return '2';
    case 'D':
    case 'E':
    case 'F':
        return '3';
    case 'G':
    case 'H':
    case 'I':
        return '4';
    case 'J':
    case 'K':
    case 'L':
        return '5';
    case 'M':
    case 'N':
    case 'O':
        return '6';
    case 'P':
    case 'R':
    case 'S':
        return '7';
    case 'T':
    case 'U':
    case 'V':
        return '8';
    case 'W':
    case 'X':
    case 'Y':
        return '9';
    default:
        return c; // If it's not a valid letter, return unchanged
    }
}