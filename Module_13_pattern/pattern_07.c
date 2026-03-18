/*
input:
n = 4

output:

   *
  ***
 *****
*******
 *****
  ***
   *

*/
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);

    int k=1;
    int s=n-1;

    for(int i=1;i<=(2*n)-1;i++)//row
    {

        for(int j=1;j<=s;j++)//speach
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)//how many star one row
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