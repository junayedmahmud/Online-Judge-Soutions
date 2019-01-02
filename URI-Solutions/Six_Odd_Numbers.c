#include<stdio.h>

int main()
{
    int X,count=0;
    
    scanf("%d", &X);
    
    for(X;X<X+20;X++){
        if(X%2!=0){
            count=count+1;
            if(count==7){
                break;
            }
            printf("%d\n", X);
        }
    }
    
    return 0;
}
