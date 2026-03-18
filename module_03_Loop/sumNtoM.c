#include<stdio.h>
int main (void)
{
int i,N,M;
int sum = 0;
scanf("%d%d",&N,&M);
for(i = N; i <= M; i++)
{
   // sum = sum + i;same
    sum += i;

}
 printf("SUM = %d\n",sum);

return 0;
}