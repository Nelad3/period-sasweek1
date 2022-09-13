#include <stdio.h>
#include <stdlib.h>

int main()
{
    double first, second, third;
    printf("enter two numbers:");
    scanf("%lf %lf", &first, &second);
    third = first;
    first = second;
    second = third;
    printf("%.2lf %.2lf", first, second);

    return 0;
}
