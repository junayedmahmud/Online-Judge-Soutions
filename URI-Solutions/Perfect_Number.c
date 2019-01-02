#include<stdio.h>

int main()
{
    int N,X,i,j;
    
    scanf("%d", &N);
    
    for(i=0;i<N;i++){
        int sum=0;
        
        scanf("%d", &X);
        
        for(j=1;j<X;j++){
            if(X%j==0){
                sum=sum+j;
            }
        }
        if(sum==X){
            printf("%d eh perfeito\n",X);
        }
        else{
            printf("%d nao eh perfeito\n",X);
        }
    }
    
    return 0;
}
