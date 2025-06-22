#include<stdio.h>
int main(){

  float n1,n2,n3,n4,a,a2,average;

  scanf("%f %f %f %f",&n1,&n2,&n3,&n4);

  

  average=(n1*2+n2*3+n3*4+n4*1)/10;

  printf("Media: %.1f\n",average);

  if (average>=7.00)
  {
    printf("Aluno aprovado.");
  }
  else if (average<5.00)
  {
    printf("Aluno reprovado.");
  }
  else {

    printf("Aluno em exame.\n");
    scanf("%f",&a);
    printf("Nota do exame: %.1f\n", a);

    a2=(average+a)/2;

    if (a2>=5.00)
    {
      printf("Aluno aprovado.\n");
    }
    else{
      ("Aluno reprovado.\n");
    }
    printf("Media final: %.1f\n", a2);

  }
  return 0;
}