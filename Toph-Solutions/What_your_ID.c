#include<stdio.h>

int main()
{
    int N,i,j;

    scanf("%d", &N);

    int P=N;

    for(i=0;i<P;i++)
    {
        char id[11];

        scanf("%s", id);

        switch(id[2])
        {
        case '1':

            switch(id[4])
            {
            case '1':

                switch(id[5])
                {
                case '1':

                    switch(id[6])
                    {
                    case '5':

                        printf("CSE Spring 20%c%c\n", id[0],id[1]);

                        break;

                    case '6':

                        printf("BBA Spring 20%c%c\n", id[0],id[1]);

                        break;

                    case '7':

                        printf("LLB Spring 20%c%c\n", id[0],id[1]);

                        break;

                    case '4':

                        printf("English Spring 20%c%c\n", id[0],id[1]);

                        break;

                    case '1':

                        printf("Economics Spring 20%c%c\n", id[0],id[1]);

                        break;
                    }

                    break;

                case '4':

                        switch(id[6])
                        {
                            case '1':
                                printf("EEE Spring 20%c%c\n", id[0],id[1]);

                                break;

                        }

                        break;
                }
            }
            break;

        case '2':

            switch(id[4])
            {
            case '1':
                switch(id[5])
                {
                case '1':
                    switch(id[6])
                    {
                    case '5':

                        printf("CSE Summer 20%c%c\n", id[0],id[1]);

                        break;

                    case '6':

                        printf("BBA Summer 20%c%c\n", id[0],id[1]);

                        break;

                    case '7':

                        printf("LLB Summer 20%c%c\n", id[0],id[1]);

                        break;

                    case '4':

                        printf("English Summer 20%c%c\n", id[0],id[1]);

                        break;

                    case '1':

                        printf("Economics Summer 20%c%c\n", id[0],id[1]);

                        break;
                    }

                    break;

                case '4':
                    {
                        switch(id[6])
                        {
                            case '1':
                                printf("EEE Summer 20%c%c\n", id[0],id[1]);

                                break;

                        }
                    }

                    break;
                }
            }

            break;

        case '3':

            switch(id[4])
            {
            case '1':
                switch(id[5])
                {
                case '1':
                    switch(id[6])
                    {
                    case '5':

                        printf("CSE Autumn 20%c%c\n", id[0],id[1]);

                        break;

                    case '6':

                        printf("BBA Autumn 20%c%c\n", id[0],id[1]);

                        break;

                    case '7':

                        printf("LLB Autumn 20%c%c\n", id[0],id[1]);

                        break;

                    case '4':

                        printf("English Autumn 20%c%c\n", id[0],id[1]);

                        break;

                    case '1':

                        printf("Economics Autumn 20%c%c\n", id[0],id[1]);

                        break;
                    }

                    break;

                case '4':
                    {
                        switch(id[6])
                        {
                            case '1':
                                printf("EEE Autumn 20%c%c\n", id[0],id[1]);

                                break;

                        }
                    }
                }
            }
        }
    }

    return 0;
}
