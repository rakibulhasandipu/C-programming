#include<stdio.h>
int main (){
   int i, n1=0, n2=1, next , n ;

   printf("enter number of terms : ");
   scanf("%d", &n);
   next= n1+n2;

   printf(" fibonacci : %d %d ", n1,n2   );

for ( i = 3; i <= n ; i++)
{
   printf("%d ",next  );
   n1=n2;
   n2=next;
   next = n1+n2;
}
return 0 ; 
}