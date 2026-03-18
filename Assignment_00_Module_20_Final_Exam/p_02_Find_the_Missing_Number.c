#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d",&T);

    for(int i=0;i<T;i++)
    {
        long long int M,A,B,C; // Multiplication and three numbers
        scanf("%lld %lld %lld %lld",&M,&A,&B,&C);

         long long int X = M/(A*B*C);
         if(X*A*B*C == M)
         {
            printf("%lld\n",X);
            
         }
         if(X*A*B*C != M)
         {
            printf("-1\n");
         }
    
    }
    
    return 0;
}