#include<stdio.h>

int main()
{
    int a,b[100],c=5,count=0;
    
    for(a=1;a<=c;a++){
        scanf("%d", &b[a]);
        if(b[a]%2==0){
            count=count+1;
        }
    }
    
    printf("%d valores pares\n", count);
    
    return 0;
}
