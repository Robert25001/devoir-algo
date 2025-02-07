#include<stdio.h>

int main()
{
    int n , i ;
    printf("Saisir un nombre:") ;
    scanf("%d",&n) ;
    for (i=1 ; i<=n ; i=i+1 )
    {
        printf("%d\n",i) ;
    }
    return (0) ;
}
