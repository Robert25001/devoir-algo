#include<stdio.h>
int main ()
{
    int i , n ;
    double fact ;
    printf("Saisir un nombre:") ;
    scanf("%d",&n) ;
    fact=1 ;
    for (i=1 ; i<=n ; i=i+1)
    {
        fact=fact*i ;
    }
    printf("%d!=%lf",n,fact) ;
    return (0) ;
}
        
