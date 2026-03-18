#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    //uper part
    int s=(n+10)/2;
    int t=1; 
    for(int i=1;i<=(n+11)/2;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=t;j++)
        {
            printf("*");
        }
        s--;
        t+=2;
        printf("\n");
    }

    


    //lower part
    int a[5][n];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf(" ");
        }
        for(int j=0;j<n;j++)
        {
          printf("*");
        }
        printf("\n");
    }
   
    return 0;
}