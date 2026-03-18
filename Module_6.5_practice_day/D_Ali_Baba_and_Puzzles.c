#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    long long int a,b,c,d,X;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);


    if(a+b*c == d)
    {
        printf("YES\n");
    }
    else if(a*b+c == d)
    {
        printf("YES\n");
    }
    else if(a*b-c == d)
    {
        printf("YES\n");
    }
    else if(a-b*c == d)
    {
        printf("YES\n");
    }
    else if(a+b-c == d)
    {
        printf("YES\n");
    }
    else if(a-b+c == d)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    

    return 0;
}