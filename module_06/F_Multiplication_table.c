#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int N,i;
    scanf("%d",&N);
    for(i=1; i<=12; i++)
    {
    
        printf(" %d * %d = %d\n",N,i,N*i);
    }
    return 0;
}