#include <stdio.h>
#include <string.h>
#include<math.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d",&T);
     
    for(int i=0;i<T;i++)
    {

        int N;
        scanf("%d",&N);
        int A[N];
        int B[N];
        for(int j=0;j<N;j++)
        {
            scanf("%d",&A[j]);//input  array A and the size of that array N        
        }

        //copy aray.this array named B
        for(int j=0;j<N;j++)
        {
            int tmp =A[j];
            B[j]=A[j];
            
        }

        //sorting array B
        for(int j=0;j<N-1;j++)
        {
            for(int i=j+1;i<N;i++)
            {
                if(B[j]>B[i])
                {
                    int tmp =B[j];
                    B[j]=B[i];
                    B[i]=tmp;
                }
            }
        }

        //bsolute difference between array A[j] and B[j].

        int C[N];
        for(int j=0;j<N;j++)
        {
            C[j]=abs(A[j]-B[j]);
        }

        //output
         for(int j=0;j<N;j++)
         {
            printf("%d ",C[j]);
         }

        printf("\n");
    }
    

   
    
    return 0;
}