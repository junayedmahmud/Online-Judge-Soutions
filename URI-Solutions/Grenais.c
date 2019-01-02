#include<stdio.h>

int main()
{
    int a,b,c,d,count=0,count1=0,count2=0,count3=0;
    
    do{
        scanf("%d", &a);
        scanf("%d", &b);
        
        count=count+1;
        
        printf("Novo grenal (1-sim 2-nao)\n");
        
        scanf("%d", &c);
        
        if(a>b){
            count1=count1+1;
        }
        if(b>a){
            count2=count2+1;
        }
        if(a==b){
            count3=count3+1;
        }
        
        if(c==2){
            break;
        }
    }while(c==1);
    
    printf("%d grenais\n",count);
    printf("Inter:%d\n",count1);
    printf("Gremio:%d\n",count2);
    printf("Empates:%d\n",count3);
    if(count1>count2){
        printf("Inter venceu mais\n");
    }
    if(count2>count1){
        printf("Gremio venceu mais\n");
    }
    if(count1==count2){
        printf("Nao houve vencedor\n");
    }
    
    return 0;
    
}
