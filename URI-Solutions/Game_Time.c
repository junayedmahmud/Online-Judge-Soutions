#include<stdio.h>

int main()
{
    int start,end,another,another1;
    
    scanf("%d %d", &start,&end);
    
    if(start>end){
        another=(24-start)+end;
        printf("O JOGO DUROU %d HORA(S)\n", another);
    }
    else if(start==end){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if(start<end){
        another1=end-start;
        printf("O JOGO DUROU %d HORA(S)\n", another1);
    }
    
    return 0;
}
