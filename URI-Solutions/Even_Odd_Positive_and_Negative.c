#include<stdio.h>

int main()
{
    int num[100],a,b=5,c=0,d=0,e=0,f=0;
    
    for(a=1;a<=b;a++){
        scanf("%d", &num[a]);
        if(num[a]%2==0){
            c=c+1;
        }
        if(num[a]%2!=0){
            d=d+1;
        }
        if(num[a]>0){
            e=e+1;
        }
        if(num[a]<0){
            f=f+1;
        }
    }
    
    printf("%d valor(es) par(es)\n", c);
    printf("%d valor(es) impar(es)\n", d);
    printf("%d valor(es) positivo(s)\n", e);
    printf("%d valor(es) negativo(s)\n", f);
    
    return 0;
}
