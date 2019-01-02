#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int T,L,i,d,p,q;

    scanf("%d", &T);

    for(i=0;i<T;i++)
    {
        scanf("%d", &L);

        int p;

        char S[L];

        fflush(stdin);

        scanf("%s", S);

        d=strlen(S);

        p=L-d;

        int j;

        if(p<=10)
        {

            printf("%0.00lf\n", pow(26.00,(double)p));
            
        }

    }

    return 0;
}
