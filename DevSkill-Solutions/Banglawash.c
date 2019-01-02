#include<stdio.h>

int main()
{
    int T,i,n1,n2,n3,n4,n5,n6,n7,n8;

    scanf("%d", &T);

    for(i=0;i<T;i++)
    {
        scanf("%d %d %d %d", &n1,&n2,&n3,&n4);
        scanf("%d %d %d %d", &n5,&n6,&n7,&n8);

        if(((n1+n2)>(n3+n4))&&((n5+n6)>(n7+n8)))
        {
            printf("Banglawash\n");
        }
        else
        {
            printf("Miss\n");
        }
    }

    return 0;
}
