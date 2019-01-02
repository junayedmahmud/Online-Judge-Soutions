#include<stdio.h>

int main()
{
    int number,count=0,num=0;
    float avg;
    
    do{
        scanf("%d", &number);
        if(number>0){
            count=count+1;
            num=num+number;
        }
        if(number<0){
            break;
        }
    }while(number>0);
    
    avg=(float)num/(float)count;
    
    printf("%0.2f\n", avg);
    
    return 0;
}
