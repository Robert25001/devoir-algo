#include<stdio.h>
#include<math.h>

int main()
{
    float a , b , c , delta , x , x1 , x2 , x3 , x4 ;
    printf("Entrez la valeur de a:");
    scanf("%f",&a);
    printf("Entrez la valeur de b:");
    scanf("%f",&b);
    printf("Entrez la valeur de c:");
    scanf("%f",&c);
    delta=(pow(b,2))-(4*a*c) ;
    x=(-c)/b ;
    x1=(-b-sqrt(delta))/(2*a);
    x2=(-b+sqrt(delta))/(2*a);
    x3=(-b)/(2*a) ;
    x4=(sqrt(-delta))/(2*a) ;
    if (a==0)
    {
        printf("solution:%.2f\n",x) ;
    }
        else if (delta>0)
        {
          printf("solutions:%.2f et %.2f\n",x1,x2) ;
        }
          else if (delta<0)
          {
            printf("solutions:%.2f -i %.2f et %.2f +i %.2f\n",x3,x4,x3,x4) ;
          }
            else
            {
              printf("solution:%.2f\n",x3) ;
            }
    return (0) ;
}
