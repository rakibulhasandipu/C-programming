#include<stdio.h>
int main (){
long long num;
int reverse=0, reminder;

printf("enter a number :");
scanf("%lld", &num);

while (num != 0)
{
    reminder= num % 10;
    reverse= reverse*10 + reminder;
    num/= 10 ;
}
printf(" Reverse number :%d", reverse);
    return 0 ; 
}