#include<stdio.h>
int main (){

int a,b,c,d;
float e,f, product1, product2, price;

scanf("%d %d %f\n", &a,&b,&e);
scanf("%d %d %f", &c,&d,&f);

product1=b*e;
product2=d*f;

price=product1+product2;

printf("VALOR A PAGAR: R$ %.2f\n",price);
return 0; 
}