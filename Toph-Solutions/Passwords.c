#include<stdio.h>
#include<stdlib.h>

int main()
{
    char string[101];

    while(scanf("%s", string)!=EOF)
    {
        long int i,count1=0,count2=0,count3=0,count4=0;

        for(i=0;string[i]!='\0';i++)
        {
            if(string[i]>='a' && string[i]<='z')
            {
                if(count1==1)
                {
                    continue;
                }
                else
                {
                    count1=count1+1;
                }
            }

            else if(string[i]>='A' && string[i]<='Z')
            {
                if(count2==1)
                {
                    continue;
                }
                else
                {
                    count2=count2+1;
                }
            }

            else if(string[i]>='0' && string[i]<='9')
            {
                if(count3==1)
                {
                    continue;
                }
                else
                {
                    count3=count3+1;
                }
            }
            if((count1+count2+count3)==3)
            {
                count4=count4+1;

                count1=0;
                count2=0;
                count3=0;
            }

        }

        printf("%ld\n", count4);
    }

    return 0;
}
