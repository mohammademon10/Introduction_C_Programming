#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int div = a-b;
    if(a>b)
    {
        printf("%d\n",div);
    }
    else
    {
        printf("0\n");
    }
    return 0;
}