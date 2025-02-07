#include<stdio.h>
int main ()
{
    int i , n ;
    double s , j , fact ;
    printf("Entrez un nombre:") ;
    scanf("%d",&n) ;
    s=0 ;
    for (i=1 ; i<=n ; i=i+1)
    {
        fact=1 ;
        for (j=1 ; j<=i ; j=j+1)
        {
            fact=fact*j ;
        }
        s=s+fact ;
    }
    printf("La somme vaut %lf",s) ;
    return (0) ;
}
