#include<stdio.h>

int main()
{
    float number[10],avg,sum=0;
    int i,count=0;
    
    for(i=0;i<6;i++){
        scanf("%f", &number[i]);
    }
    
    for(i=0;i<6;i++){
      if(number[i]>0){
         count=count+1;
         sum=sum+number[i];
      }
    }
    
    avg=sum/count;
    
    printf("%d valores positivos\n", count);
    printf("%0.1f\n", avg);
}
