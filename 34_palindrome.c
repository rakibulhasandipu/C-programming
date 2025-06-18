#include<stdio.h>
int main(){
  int num, rev=0, original,reminder;

  printf("enter a number:");
  scanf("%d",&num);
  original=num;
  while (num!=0)
  {
    reminder=num%10;
    rev=rev*10+reminder;
    num=num/10;
  }
  if (original==rev)
  {
    printf("palindrome number");
  }
  else{
    printf(" not palindrome number");
  }
  return 0;
  }
