#include<stdio.h>

int main()
{
    int X,Y,sum=0;
    
    scanf("%d %d", &X,&Y);
    
    Y=Y+1;
    X=X-1;
    
    for(Y;Y<=X;Y++){
        if(Y%2!=0){
            sum=sum+Y;
        }
    }
    
    printf("%d\n", sum);
    
    
    return 0;
}
