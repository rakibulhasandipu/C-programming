#include <stdio.h>
int main (){
char operation;
float n1 , n2 ;

printf ("enter an operation :(+,_,*,/) ");
scanf ("%c", &operation);

printf ("enter two operands : ");
scanf("%f %f", &n1, &n2);

switch (operation)
{
case '+':
    printf("%0.0f + %0.0f = %0.0f", n1, n2, n1+n2);
    break;

    case '-':
    printf("%0.0f - %0.0f = %0.0f", n1 , n2 , n1-n2);
    break;

    case '*':
    printf("%0.0f * %0.0f = %0.0f", n1 , n2, n1*n2);
    break;

    case '/':
    printf ("%0.0f / %0.0f = %0.0f", n1, n2, n1/n2);
    break;

default: printf ("error ! opperation is not correct");
    break;
}
return 0 ;
}