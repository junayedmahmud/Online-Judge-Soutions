#include<stdio.h>

int main()
{
    int X,i;
    
    do{
        scanf("%d", &X);
        
        for(i=1;i<=X;i++){
                printf("%d",i);
                if(i!=X){
                    printf(" ");
                }
                if(i==X){
                    printf("\n");
                }
        }
        if(X==0){
            break;
        }
    }while(X);
    
    return 0;
}
