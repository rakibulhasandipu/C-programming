#include<stdio.h>
#define pi 3.14159 
int main (){

double a,b,c,t1,c2,t2,q,r;

scanf("%lf %lf %lf", &a,&b,&c);

t1= 0.5*a*c;
c2= pi*(c*c);
t2= 0.5*(a+b)*c;
q=b*b;
r=a*b;

printf("TRIANGULO: %.3lf\n", t1);
printf("CIRCULO: %.3lf\n", c2);
printf("TRAPEZIO: %.3lf\n", t2);
printf("QUADRADO: %.3lf\n", q);
printf("RETANGULO: %.3lf\n", r);

return 0; 
}