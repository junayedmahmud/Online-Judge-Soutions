#include<stdio.h>

int main()
{
    int T,N,i,j;

    scanf("%d", &T);

    for(i=1;i<=T;i++)
    {
        scanf("%d", &N);

        int M[N],sum=0,max=0,count=0;

        for(j=0;j<N;j++)
        {
            scanf("%d", &M[j]);
            sum=sum+M[j];
        }

        for(j=0;j<N;j++)
        {
            if(max<M[j])
            {
                max=M[j];
            }
        }

        int min=max;

        for(j=0;j<N;j++)
        {
            if(min>M[j])
            {
                min=M[j];
            }
        }

        int num=sum/min;

        int k=0,location[N];

        for(j=0;j<N;j++)
        {

            if(num==M[j])
            {
                count++;

                location[k]=j+1;

                k++;
            }
        }

        for(j=0;j<count;j++)
        {
            printf("%d", location[j]);

            if(j==count-1)
            {
                printf("\n");
            }
            else
            {
                printf(" ");
            }
        }

        if(count==0)
        {
            printf("NULL\n");
        }

        sum=0;
        max=0;
        count=0;
    }

    return 0;
}
