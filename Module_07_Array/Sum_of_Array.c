#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int sum = 0;
    for(int i=0; i<n;i++)
    {
        sum = sum+ar[i];
    }
    printf("%d",sum);
    
    return 0;
}