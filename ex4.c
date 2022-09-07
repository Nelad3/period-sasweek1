#include <stdio.h>
#include <stdlib.h>

int main()
{
   double mile, meter;
   printf("meter: \n");
   scanf("%lf", &meter);
   mile = meter * 1609;
   printf("the distance in mile is: %lf \n", mile);
    return 0;
}
