#include<stdio.h>
#include<math.h>

int main()
{
    int T,i,x;

    long long int Number=0;

    double  a,minus;

    scanf("%d", &T);

    for(i=0;i<T;i++)
    {
        scanf("%d",&x);

        if(x%2==0)
        {
            a=pow((double)2,(double)x);

            long long int b=(long long int)a;

            long long int remainder;

            while(b!=0)
            {
                remainder=b%10;

                Number=Number*10+remainder;

                b=b/10;

            }

            long long int  x=Number%10;

            int z=(int)x;

            if(z>=0)
            {
                printf("+%d\n",z);
            }
            else
            {
                printf("%d\n",z);
            }
            Number=0;
        }
        else
        {
            minus=(-1)*pow((double)2,(double)x);

            long long int z=(long long int)minus;


            long long int remainder;

            while(z!=0)
            {
                remainder=z%10;

                Number=Number*10+remainder;

                z=z/10;

            }

            long long int x=Number%10;

            int p=(int)x;

            if(p>=0)
            {
                printf("+%d\n", p);
            }
            else
            {
                printf("%d\n", p);
            }

        }

        Number=0;
    }

    return 0;
}
