// #define _USE_MATH_DEFINES /// it is require for some compilers for get M_PI
#include <stdio.h>
#include <math.h>

void main()
{
    const int r = 10;
    const double pi = 3.14;
    double fraction = (double)4 / 3;

    double volume = 4.0f / 3.0f * pi * r * r * r;
    double volume1 = (4 / 3) * pi * r * r * r;
    printf("le volume de la sphere en ustilise (4.0f/3.0f) est: %.3lf\n", volume);
    printf("le volume11 de la sphere en ustilise (4/3) est: %.3lf\n", volume1);
    //     le volume de la sphere en ustilise (4.0f/3.0f) est: 4186.667
    // le volume11 de la sphere est: 3140.000

    return;
}
