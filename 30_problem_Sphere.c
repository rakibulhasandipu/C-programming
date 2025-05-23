#include<stdio.h>
#define pi 3.14159
int main (){

double r,result;

scanf("%lf",&r);

result= (4.0/3.0) * pi *(r*r*r); 

printf("VOLUME = %.3lf",result); 
return 0; 
}