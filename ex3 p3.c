#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p, i, prime;
    printf("enter a number: ");
    scanf("%d", &p);
    prime=1;
    for(i=2; i<p; i++)
    {
        if(p%i==0)
        {
            prime=0;
            break;
        }

    }
    if(prime==1)
        printf("the num %d is prime\n", p);
    else
        printf("the num %d is not prime\n", p);


    return 0;
}
