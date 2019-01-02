#include<stdio.h>

int main()
{
    int i,N,X,Y;
    
    scanf("%d", &N);
    
    for(i=0;i<N;i++){
        scanf("%d", &X);
        scanf("%d", &Y);
        
        if(Y==0){
            printf("divisao impossivel\n");
        }
        else{
            printf("%0.1f\n",(float)X/Y);
        }
    }
    
    return 0;
}
