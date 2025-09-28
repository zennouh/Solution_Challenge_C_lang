
#include <stdio.h>
#define NUM_RATES ((int)(sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

void main()
{
    int i, low_rate, num_years, year;
    double value[5];
    printf("Taux d'interet : ");
    scanf("%d", &low_rate);
    printf("Nomber d'annees : ");
    scanf("%d", &num_years);

    printf("\nAnnees");
    for (int i = 0; i < NUM_RATES; i++)
    {
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");
    for (year = 1; year <= num_years; year++)
    {
        printf("%3d   ", year);
        for (int i = 0; i < NUM_RATES; i++)
        {
            double annualRate = (low_rate + i) / 100.0;
            double monthlyRate = annualRate / 12.0;
            // for (int m = 0; m < 12; i++)
            // {
            value[i] += monthlyRate * value[i];
            // value[i] += monthlyRate * value[i];
            // }

            printf("%7.2f", value[i]);
        }
        printf("\n");
    }
}