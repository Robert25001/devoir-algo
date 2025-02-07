#include<stdio.h>
int main ()
{
    int a , b , r ;
    printf("Determination si deux nombres sont premier entre eux\n\n") ;
    printf("Enrez le premier nombre:") ;
    scanf("%d",&a) ;
    printf("Enrez le second nombre:") ;
    scanf("%d",&b) ;
    a=a ;
    b=b ;
    do
    {
        r=a%b ;
        a=b ;
        b=r ;
    }while (r!=0) ;
    if (a==1)
    {
        printf("Ils sont premier entre eux") ;
    }
        else
            printf("Ils ne sont pas premier entre eux") ;
    return (0) ;
}
