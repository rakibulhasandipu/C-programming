#include<stdio.h>
int main (){
   int  num, i, fact=1 ; // when we want to input a large number, we must use "long" type// 

   printf("enter a number :");
   scanf("%d", &num);

   for (i=1;  i <=num; i++) // intialization, condition, increment // 
   {
      fact = fact*i ;
   }
printf(" factorial of %d :%d", num, fact);
   return 0 ; 
}