#include<stdio.h>

int main()
{
    int i,N,X,count=0,count1=0;
    
    scanf("%d", &N);
    
    for(i=0;i<N;i++){
        scanf("%d", &X);
        if(X<10 || X>20){
            count=count+1;
        }
        else if(X>=10 && X<=20){
            count1=count1+1;
        }
    }
    
    printf("%d in\n", count1);
    printf("%d out\n", count);
    
    return 0;
}
