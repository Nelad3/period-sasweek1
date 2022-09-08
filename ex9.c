#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;
    float mn;

    printf("What is the distance in MN: \n");
    printf("enter x1:");
    scanf("%d", &x1);
    printf("enter y1:");
    scanf("%d", &y1);
    printf("enter x2:");
    scanf("%d", &x2);
    printf("enter y2:");
    scanf("%d", &y2);

    mn = sqrt((x2–x1)*(x2–x1)+(y2–y1)*(y2–y1));
    printf("%f", mn);


    return 0;
}
