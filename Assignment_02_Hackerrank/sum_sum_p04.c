#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int N;
    scanf("%d",&N);
   int V,pos=0,neg=0;
    for(int i=1;i<=N;i++)
  {
    scanf("%d",&V);

    if(V>=0)
    { 
      //sum of positive number
      pos = pos+V;
    }
    else
    {
      //sum of negative number
      neg = neg+V;
    }

  }
  printf("%d %d",pos,neg);

    return 0;
}