#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int N;
    scanf("%d",&N);//39


    int a=N%10;//9
    int b=N/10;//3


    if(a%b==0 || b%a==0)
    {
        printf("YES\n");
    }
    else
    {
    printf("NO\n");
    }
    return 0;
}