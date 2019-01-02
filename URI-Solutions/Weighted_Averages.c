#include<stdio.h>

int main()
{
    int N,i;
    
    scanf("%d", &N);
    
    for(i=0;i<N;i++){
        float A,B,C,result;
        
        scanf("%f", &A);
        scanf("%f", &B);
        scanf("%f", &C);
        
        result=(A*2+B*3+C*5)/10;
        
        printf("%0.1f\n", result);
    }
    
    return 0;
}
