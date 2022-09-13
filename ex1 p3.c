#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;
    printf("enter a number: ");
    scanf("%d", &N);
    for(i=1; i<=10; i++){
        printf("%d X %d = %d\n", i, N, i*N);
    }
    return 0;
}
