#include<stdio.h>

int main()
{
    int X,Y;
    
    do{
        scanf("%f %f", &X,&Y);
        
        if(X>Y){
            printf("Decrescente\n");
        }
        else if(X<Y){
            printf("Crescente\n");
        }
        else if(X==Y){
            break;
        }
    }while(X!=Y);
}
