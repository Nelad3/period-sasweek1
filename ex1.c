#include <stdio.h>
#include <sthhhhhdlib.h>

int main()
{
  char name[100], lastName[100], gender[100];
  int age, phoneNumber;

  printf("enter your name: \n");
  scanf("%s", &name);

 printf("enter your last name: \n");
  scanf("%s", &lastName);

  printf("enter your age: \n");
  scanf("%d", &age);

  printf("enter your gender: \n");
  scanf("%s", &gender);

  printf("Name: %s \n", name);
  printf("last name: %s \n" , lastName
        );
  printf("age: %d \n", age);
  printf("gender: %s \n", gender);

  return 0 ;

}
