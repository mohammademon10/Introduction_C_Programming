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
    int X;
    scanf("%d",&X);
    int ans=-1;

    for(int i=0;i<size;i++)
    {
     if(A[i]==X)
     {
       ans=i;
       break;
     }
   
    }
    printf("%d",ans);
     
    
return 0;

}