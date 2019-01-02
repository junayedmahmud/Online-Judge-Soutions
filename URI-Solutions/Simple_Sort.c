#include<stdio.h>
#include<stdbool.h>

int main()
{
    int arr[10],i,a,b,c,j,temp;
    bool swapped;
    
    for(i=0;i<3;i++){
        scanf("%d", &arr[i]);
    }
        a=arr[0];
        b=arr[1];
        c=arr[2];
        
        for(i=0;i<3-1;i++){
            swapped=false;
            for(j=0;j<3-1-i;j++){
                if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    
                    swapped=true;
                }
            }
            if(swapped==false){
                break;
            }
        }
    
    for(i=0;i<3;i++){
        printf("%d\n",arr[i]);
    }
    
    printf("\n");
    
    printf("%d\n%d\n%d\n", a,b,c);
    
    return 0;
}
    
