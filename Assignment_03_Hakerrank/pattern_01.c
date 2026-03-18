
#include <stdio.h>

int main(void)
{
int N;
scanf("%d",&N);
int S = N-1;
int K=1;


for(int i=1;i<=(2*N)-1;i++)
{
    // Print leading spaces
    for(int j=1;j<=S;j++)
    {
        printf(" ");
    }

    // Print decreasing sequence
    for(int j=1;j<=K;j++)
    {
        if(i%2 !=0)
        {
          printf("#");
        }
        else
        {
          printf("-");
        }
       
         
    }
  if(i<=N-1)
  {
    S--;
    K+=2;
  }
  else
  {
    S++;
    K-=2;
  }
   
    printf("\n");
}

    return 0;
}

