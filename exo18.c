#include<stdio.h>
int main ()
{
    int a , b , r ;
    printf("Saisir le premier nombre:") ;
    scanf("%d",&a) ;
    printf("Saisir le second nombre:") ;
    scanf("%d",&b) ;
    do
    {
        r=a%b ;
        a=b ;
        b=r ;
    }
    while (r!=0) ;
    printf("Leur pgcd est %d",a) ;
    return (0) ;
}
