#include<stdio.h>
int main (){
    int number, num1, num2;

    printf("enter number :");
    scanf("%d", &number);

    num1= number/10;
    num2= number%10;

    printf("%d\n", num1);
    printf("%d", num2); 
return 0 ; 
}