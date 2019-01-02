#include<stdio.h>

int main()
{
    int i,N,X,Y,temp,Z;
    
    scanf("%d", &N);
    
    for(i=0;i<N;i++){
        int sum=0;
        scanf("%d %d", &X,&Y);
        if(X>Y){
            temp=X;
            X=Y;
            Y=temp;
        }
        Z=X+1;
        for(Z;Z<Y;Z++){
            if(Z%2!=0){
                sum=sum+Z;
            }
        }
        printf("%d\n", sum);
        
    }
    
    return 0;
}
