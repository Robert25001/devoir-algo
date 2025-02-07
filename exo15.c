#include<stdio.h>
#include<math.h>
int main ()
{
    int i , n ;
    float s ;
    printf("Entrez un nombre:") ;
    scanf("%d",&n) ;
    s=0 ;
    for (i=0 ; i<=n ; i=i+1)
    {
        s=s+pow(10,i) ;
    }
    printf("La somme vaut %g",s) ;
    return (0) ;
}
