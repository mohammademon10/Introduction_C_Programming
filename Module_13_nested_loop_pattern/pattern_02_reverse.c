#include <stdio.h>
int main(void)
{
    int n,s=0;
    scanf("%d",&n);
  
   int k=2*n-1;//input er por nitte hobbe

    for(int i=1;i<=n;i++)//1st
    {
        for(int j=1;j<=s;j++)//2nd
        {
            printf(" ");//1st kaj speach print kora
        }
        for(int j=1;j<=k;j++)//3rd
        {
            printf("*");//2nd kaj star print kora
        }

        //line seas//4th
        s++; 
        k-=2;//k=k-2;
        printf("\n");
    }

    return 0;
}