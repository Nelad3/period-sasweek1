#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("enter a number between 0 and 100: ");
    scanf("%d", &N);
    while(N<0 || N>100){
      if (N<0){
        printf("smaller\n");
      }
      else
        printf("bigger\n");
    printf("enter a number between 0 and 100: ");
    scanf("%d", &N);
    }
    printf("right number!!");

    return 0;
}
