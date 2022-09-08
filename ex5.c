#include <stdio.h>
#include <stdlib.h>
void main()
{
     int temperature;

    printf("Temperature of the day : ");
    scanf("%d",&temperature);
    if(temperature<0)
    printf("Freezing weather.\n");
    else if(temperature<10)
    printf("Very cold weather.\n");
    else if(temperature<20)
    printf("Cold weather.\n");
    else if(temperature<30)
    printf("Normal in temp.\n");
    else if(temperature<40)
    printf("Its Hot.\n");
    else
    printf("Its very hot.\n");

}
