#include <stdio.h>
int main(void)
{
    int n,k=1;
    scanf("%d",&n);
    int s=n-1;

    for(int i=1;i<=2*n;i++)
    {
        for(int j=1;j<=s;j++)//speach
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        if(i<=n-1)
        {
           s--;
           k+=2;
        }
       
        else
        {
            s++;
            k-=2;
        }
       
        printf("\n");
    }

    return 0;
}