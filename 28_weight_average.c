#include<stdio.h>
int main (){
float n1,n2,c;

scanf("%f\n",&n1);
scanf("%f",&n2);

c=((n1*3.5)+(n2*7.5))/(3.5+7.5);

printf("MEDIA = %.5f",c);
return 0 ; 
}