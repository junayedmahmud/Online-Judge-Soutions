#include<stdio.h>

int main()
{
    int cop1,nop1,cop2,nop2;
    float pop1,pop2,pay;
    
    scanf("%d", &cop1);
    scanf("%d", &nop1);
    scanf("%f", &pop1);
    scanf("%d", &cop2);
    scanf("%d", &nop2);
    scanf("%f", &pop2);
    
    pay=(nop1*pop1)+(nop2*pop2);
    
    printf("VALOR A PAGAR: R$ %0.2f\n",pay);
    
    return 0;
    
}
