#include<stdio.h>

int main()
{
    float x,sum=0.00,avg;
    int i,count=0;
    
    do{
        scanf("%f", &x);
        
       if(x<0 || x>10){
        printf("nota invalida\n");
       }
       if(x>=0 && x<=10){
          count=count+1;
          sum=sum+x;
       }
       if(count==2){
        avg=sum/count;
        printf("media = %0.2f\n", avg);
        break;
       }
    }while(x);
}
