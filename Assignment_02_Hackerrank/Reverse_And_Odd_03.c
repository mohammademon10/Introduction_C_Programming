#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    if(N%2 !=0)//N=odd number
    {
         for(int i=N-2;i>0;i=i-2)//i=N-2
    {
        printf("%d ",A[i]);
    }
        
    }
   else if(N%2 == 0)//N=even number
   {
      for(int i=N-1;i>0;i=i-2)//i=N-1
    {
      printf("%d ",A[i]);
    }
   }
    return 0;
}