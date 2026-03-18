#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int i,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        if(i==1 || N%i == 0 )
        {
            printf("%d\n",i);
        }
    }
    return 0;
}