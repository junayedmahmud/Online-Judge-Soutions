#include<stdio.h>

int main()
{
    int X,Y;
    
    scanf("%d %d", &X,&Y);
    
    if(X>Y){
    
       for(Y++;Y<X;Y++){
          if(Y%5==2||Y%5==3){
            printf("%d\n",Y);
        }
      }
    }
    if(Y>X){
        
        for(X++;X<Y;X++){
            if(X%5==2||X%5==3){
                printf("%d\n",X);
            }
        }
    }
    
    return 0;
}
