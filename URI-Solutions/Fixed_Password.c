#include<stdio.h>

int main()
{
    int password;
    
    do{
        scanf("%d", &password);
        if(password!=2002){
                printf("Senha Invalida\n");
        }
        if(password==2002){
            printf("Acesso Permitido\n");
            break;
        }
        
    }while(password!=2002);
    
    return 0;
}
