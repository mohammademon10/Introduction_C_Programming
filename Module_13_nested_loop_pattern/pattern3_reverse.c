#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    
    int k=n;
    for(int i=1;i<=n;i++)
    { 
         //int k=n;
        for(int j=1;j<=k;j++)
        {
            printf("%d ",j);
        }
        k--;
        printf("\n");
    }

    return 0;
}