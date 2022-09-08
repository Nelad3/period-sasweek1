#include <stdio.h>
#include <stdlib.h>

int main()
{
    double C, F;
    printf ("F: \n");
    scanf("%lf", &F);
    C = (F-32)/1.8;
    printf("C: %f", C);
    return 0;
}
