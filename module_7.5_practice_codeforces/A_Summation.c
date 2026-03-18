#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int size;
    scanf("%d",&size);
    int A[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
    }
    long long int sum=0;
    for(int i=0;i<size;i++)
    {
     sum = sum+A[i]; 
    }
   if(sum<0)
   {
    printf("%lld",sum*(-1));
   }
   else
   {
    printf("%lld",sum);
   }
    return 0;
}