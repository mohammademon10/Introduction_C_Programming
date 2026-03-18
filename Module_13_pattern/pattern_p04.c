/*
input: 
n = 4
output:

*******
 *****
  ***
   *
*/

#include <stdio.h>

int main(void)
{
    int n;     
    scanf("%d",&n);//rowfg

    int s=0;//speachm
    int k = 2*n-1;//coulmn

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        k-=2;//k=k-2;
        s++;
        printf("\n");
    }
    
    return 0;
}