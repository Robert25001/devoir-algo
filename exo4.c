#include<stdio.h>

int main ()
{
    float n1 , n2 , s , m ;
    printf("Entrez la premiere note:") ;
    scanf("%f",&n1) ;
    printf("Entrez la deuxieme note:") ;
    scanf("%f",&n2) ;
    s = n1 + n2 ;
    m = s / 2 ;
    printf("Leur somme est %.2f et leur moyenne est %.2f\n",s,m) ;
    return (0) ;
}
