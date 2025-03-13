#include <stdio.h>
int main (){
  int num;
  float num2;
  double num3;
  char  name;

  printf("enter imtiger number");
  scanf ("%d", &num);

  printf("enter float number");
  scanf ("%f", &num2);

  printf("enter double number");
  scanf ("%lf", &num3);

  printf("enter character");
  scanf (" %c", &name);


  printf("intiger number: %d\n", num);
  printf("float number: %f\n", num2);
  printf("double number: %lf\n", num3);
  printf("character : %c\n", name);
  return 0 ;
}

