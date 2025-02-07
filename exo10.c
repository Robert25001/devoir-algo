#include<stdio.h>
int main ()
{
    int i , n ;
    printf("Saisir un nombre:") ;
    scanf("%d",&n) ;
    for (i=1 ; i<=n ; i=i+1 )
    {
        if (n%i==0)
        {
            printf("%d\n",i) ;
        }
    }
    return (0) ;
}
