// #define _USE_MATH_DEFINES /// it is require for some compilers for get M_PI
#include <stdio.h>
#include <math.h>

void main()
{
    const int rayon = 10;
    const double pi = 3.14;
    double fraction = (double)4 / 3;

    double volume = (double)fraction * pi * pow(rayon, 3);
    printf("le volume de la sphere est: %.3lf\n", volume);
    return;
}
