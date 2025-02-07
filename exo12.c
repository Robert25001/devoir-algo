#include<stdio.h>
int main ()
{
    int n , i ;
    float s ;
    printf("Entrez un nombre:") ;
    scanf("%d",&n) ;
    s=0 ;
    for (i=1 ; i<=n ; i=i+1 )
    {
        s=s+i ;
    }
    printf("La somme vaut %g",s) ;
    return (0) ;
}
