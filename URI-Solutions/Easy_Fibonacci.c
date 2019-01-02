#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,num,c,sum;
    a=0;
    b=1;

    scanf("%d", &num);
    
    for(c=0;c<num;c++){
        printf("%d",a);
        if(c<num-1){
            printf(" ");
        }
        sum=a+b;
        a=b;
        b=sum;
    
    }
    printf("\n");
    return 0;
}
