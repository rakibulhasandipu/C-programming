#include<stdio.h>
int main(){
  int num, count=0,i;

  printf("enter a possitive number :");
  scanf("%d",&num);

  for ( i = 2; i <num; i++)
  {
    if (num%i==0)
    {
      count++;
      break;
    }

  }
  if (count==0)
  {
    printf("prime number");
  }
  else{
    printf("not prime number");
  }
  return 0; 
}