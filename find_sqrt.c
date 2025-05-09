#include<stdio.h>
#include<math.h>
int main (){
    float a, b, c, dis, root1, root2, realpart, impart;

    printf ("enter the value of a , b, c :");
    scanf("%f %f %f ", &a, &b, &c);

     dis = (b*b)-(4*a*c);

    if (dis>0)
    {
        root1 = (-b+ sqrt(dis))/(2*a);
         root2 = (-b- sqrt(dis))/(2*a);
         printf("root1: %f and root2: %f", root1, root2);
    }
    else if (dis==0)
    {
        root1=root2=(-b)/(2*a);
          printf("root1: %f and root2: %f", root1, root2);
    }
    else {
        realpart= (-b)/(2*a);
        impart = (sqrt (-dis))/(2*a);
        printf("root1 : %f+ %fi root2 : %f - %fi", realpart, impart, realpart, impart);
    }
    return 0; 
    
}