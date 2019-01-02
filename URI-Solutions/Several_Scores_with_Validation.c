#include<stdio.h>

int main()
{
    double a;
    int X;
    int count=0;
    double sum=0.00,media;
    
    do{
        
        scanf("%lf", &a);
        
        if(a<0 || a>10){
            printf("nota invalida\n");
        }
        if(a>=0 && a<=10){
            
            count=count+1;
            
            sum=sum+a;
            
            if(count==2){
                media=sum/count;
                printf("media = %0.2lf\n", media);
            
            do{
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &X);
            }while(X<1 || X>2);
            
            if(X==1){
                count=0;
                sum=0.00;
            }
            
            if(X==2){
                break;
            }
          }
        }
        
    }while(a||X==1);
}
