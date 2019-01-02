#include<stdio.h>

int main()
{
    float num[100];
    int a,b=6;
    int c=0;
    
    for(a=1;a<=b;a++){
        scanf("%f", &num[a]);
        if(num[a]>0){
            c=c+1;
        }
    }
    
    printf("%d valores positivos\n",c);
    
    return 0;
}
