#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int ar[n+1];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int pos,val;
    scanf("%d %d",&pos,&val);
    for(int i=n; i>=pos+1;i--)
    {
        ar[i]=ar[i-1];
    }
    ar[pos]=val;
    for(int i=0;i<n+1;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}