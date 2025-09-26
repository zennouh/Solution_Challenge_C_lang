
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// #define N 10

void main()
{
    int N;
    printf("Enter N nombers: ");
    scanf("%d", &N);
    int a[N];
    int len = sizeof(a) / sizeof(a[0]);
    printf("enter les elements:\n");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = len - 1; i >= 0; i--)
    {
        printf(" %d", a[i]);
    }
    printf("\n");
}
///////////////// uaeirfgue
///////// exercice 11 in day 2