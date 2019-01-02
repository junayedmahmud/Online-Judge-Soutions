#include <stdio.h>
#include<string.h>

int main() {

    char first_word[15],second_word[15],third_word[15];

    scanf("%s", first_word);
    scanf("%s", second_word);
    scanf("%s", third_word);

    if(strcmp(first_word,"vertebrado")==0){
        if(strcmp(second_word,"ave")==0){
            if(strcmp(third_word,"carnivoro")==0){
                printf("aguia\n");
            }
            else if(strcmp(third_word,"onivoro")==0){
                printf("pomba\n");
            }
        }
        else if(strcmp(second_word,"mamifero")==0){
            if(strcmp(third_word,"onivoro")==0){
                printf("homem\n");
            }
            else if(strcmp(third_word,"herbivoro")==0){
                printf("vaca\n");
            }
        }
    }
    if(strcmp(first_word,"invertebrado")==0){
        if(strcmp(second_word,"inseto")==0){
            if(strcmp(third_word,"hematofago")==0){
                printf("pulga\n");
            }
            else if(strcmp(third_word,"herbivoro")==0){
                printf("lagarta\n");
            }
        }
        else if(strcmp(second_word,"anelideo")==0){
            if(strcmp(third_word,"hematofago")==0){
                printf("sanguessuga\n");
            }
            else if(strcmp(third_word,"onivoro")==0){
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
