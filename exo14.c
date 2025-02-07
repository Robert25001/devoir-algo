#include<stdio.h>
int main ()
{
    int n ;
    float i , s ;
    printf("Entrez un nombre:") ;
    scanf("%d",&n) ;
    s=0 ;
    for (i=1 ; i<=n ; i=i+1)
    {
        s=s+(1/i) ;
    }
    printf("La somme vaut %.2f",s) ;
    return (0) ;
}
