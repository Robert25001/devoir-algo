#include<stdio.h>
int main ()
{
    int a , b , c ;
    printf("Entrez la valeur de A:") ;
    scanf("%d",&a) ;
    printf("Entrez la valeur de B:") ;
    scanf("%d",&b) ;
    c=a ;
    a=b ;
    b=c ;
    printf("La valeur de A est %d et la valeur de B est %d",a,b) ;
    return (0) ;
}