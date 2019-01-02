#include<stdio.h>
#include<string.h>

int main()
{
    int T,j,i,N;

    unsigned int max=0,min=0;

    scanf("%d", &T);

    for(i=0;i<T;i++)
    {
        scanf("%d", &N);

        struct name
        {
            char names[50];
            unsigned int fm;
        };

        struct name d[N];

        char name1[50];
        char name2[50];

        for(j=0;j<N;j++)
        {
            fflush(stdin);
            scanf("%s", d[j].names);
            scanf("%u", &d[j].fm);
        }

        for(j=0;j<N;j++)
        {
            if(max<d[j].fm)
            {
                max=d[j].fm;
            }
        }

        min=max;

        for(j=0;j<N;j++)
        {
            if(min>d[j].fm)
            {
                min=d[j].fm;
            }
        }

        for(j=0;j<N;j++)
        {
            if(max==d[j].fm)
            {
                strcpy(name1,d[j].names);
                break;
            }
        }

        for(j=0;j<N;j++)
        {
            if(min==d[j].fm)
            {
                strcpy(name2,d[j].names);
                break;
            }
        }

        printf("%s %s\n", name1,name2);

        max=0,min=0;
    }

    return 0;
}
