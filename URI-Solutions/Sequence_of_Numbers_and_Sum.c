#include<stdio.h>

int main()
{
    int M,N,temp,sum=0;
    
    do{
        scanf("%d %d", &M,&N);
        if(M<=0 || N<=0){
            break;
        }
        
        if(M>N){
            temp=M;
            M=N;
            N=temp;
        }
        
        for(M;M<=N;M++){
            printf("%d ", M);
            sum=sum+M;
            
        }
        printf("Sum=%d\n", sum);
        sum=0;
        
    }while(M || N);
}
