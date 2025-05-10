#include<stdio.h>
int main(){

int num, range, i ;

printf("enter a number :"); 
scanf ("%d", &num);

printf ("enter a range :");
scanf ("%d", &range);

for ( i = 1; i <=range; i++)
{
   printf ("%d*%d = %d\n ", num, i, num*i);
}
return 0 ; 
}