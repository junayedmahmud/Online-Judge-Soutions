#include<stdio.h>

int main()
{
    int T,i;

    char N[13];

    scanf("%d", &T);

    for(i=0;i<T;i++)
    {
        fflush(stdin);

        scanf("%s", N);

        if(N[0]=='8'&&N[1]=='8')
        {
            if(N[2]=='0'&&N[3]=='1'&&N[4]=='7')
            {
                printf("%s Grameenphone\n", N);
            }
            if(N[2]=='0'&&N[3]=='1'&&N[4]=='1')
            {
                printf("%s Citycell\n", N);
            }
            if(N[2]=='0'&&N[3]=='1'&&N[4]=='5')
            {
                printf("%s Teletalk\n", N);
            }
            if(N[2]=='0'&&N[3]=='1'&&N[4]=='6')
            {
                printf("%s Airtel\n", N);
            }
            if(N[2]=='0'&&N[3]=='1'&&N[4]=='8')
            {
                printf("%s Robi\n", N);
            }
            if(N[2]=='0'&&N[3]=='1'&&N[4]=='9')
            {
                printf("%s Banglalink\n", N);
            }
        }
        else
        {
            if(N[0]=='0'&&N[1]=='1'&&N[2]=='7')
            {
                printf("88%s Grameenphone\n", N);
            }
            if(N[0]=='0'&&N[1]=='1'&&N[2]=='1')
            {
                printf("88%s Citycell\n", N);
            }
            if(N[0]=='0'&&N[1]=='1'&&N[2]=='5')
            {
                printf("88%s Teletalk\n", N);
            }
            if(N[0]=='0'&&N[1]=='1'&&N[2]=='6')
            {
                printf("88%s Airtel\n", N);
            }
            if(N[0]=='0'&&N[1]=='1'&&N[2]=='8')
            {
                printf("88%s Robi\n", N);
            }
            if(N[0]=='0'&&N[1]=='1'&&N[2]=='9')
            {
                printf("88%s Banglalink\n", N);
            }
        }
    }

    return 0;
}
