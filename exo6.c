#include<stdio.h>

int main()
{
    int coef1 , coef2 ;
    float n1 , n2 , m ;
    printf("Entrez le premier note et son coefficient:");
    scanf("%f%d",&n1,&coef1);
    printf("Entrez le second note et son coefficient:");
    scanf("%f%d",&n2,&coef2);
    m=(n1+n2)/(coef1+coef2);
    printf("Leur moyenne est:%.2f",m);
    return (0);
}