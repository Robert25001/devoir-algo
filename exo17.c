#include<stdio.h>
int main ()
{
    int n ;
    float fact , i , s , j ;
    printf("calcule somme de S=1/1!+1/2!+...+1/N!\n\n") ;
    printf("Entrez la valeur de N:") ;
    scanf("%d",&n) ;
    s=0 ;
    for (i=1 ; i<=n ; i=i+1)
    {
        fact=1 ;
        for (j=1 ; j<=i ; j=j+1)
        {
            fact=fact*j ;
        }
        s=s+(1/fact) ;
    }
    printf("S=%.2f",s) ;
    return (0) ;
}
    
    
