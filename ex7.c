#include <stdio.h>
#include <stdlib.h>

int main()
{
        int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b) ;
    printf("la somme : %d", (a+b));
    printf("\n la moyenne : %.2f", (float) (a+b));

    return 0;

}
