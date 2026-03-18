#include<stdio.h>
int main(void)
{
    char X;
    scanf("%c",&X);

    if(X >= '0' && X <= '9')// keyboard er all char 0 to 9 all char and is ascii value 48 to 57
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");

        if(X >= 'A' && X <= 'Z')
        {
            printf("IS CAPITAL\n");
        }
        else
        {
            printf("IS SMALL\n");
        }

    }


    return 0;
}