#include<stdio.h>

int main()
{
    int i , n ;
    printf("Saisir un nombre:") ;
    scanf("%d",&n) ;
    for (i=0 ; i<=n ; i=i+2 )
    {
        printf("%d\n",i) ;
    }
    return (0) ;
}
