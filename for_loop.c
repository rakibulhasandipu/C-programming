#include <stdio.h>
int main (){
    int num, i, sum=0 ;

    printf("enter a positive number :");
    scanf ("%d", &num);

    for ( i = 1; i <= num; ++i)
    {
        sum= sum+i ;     
    }
    printf("sum = %d", sum);
    return 0 ; 
}