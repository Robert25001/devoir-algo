#include<stdio.h>

int main ()
{
    int a , b , c , max ;
    printf("Entrez la valeur de a:") ;
    scanf("%d",&a) ;
    printf("Entrez la valeur de b:") ;
    scanf("%d",&b) ;
    printf("Entrez la valeur de c:") ;
    scanf("%d",&c) ;
    max = a ;
    if (b>max)
    {
        max = b ;
    }
    if (c>max)
    {
        max = c ;
    }
    printf("La valeur maximum est %d",max) ;
    return (0) ;
}
