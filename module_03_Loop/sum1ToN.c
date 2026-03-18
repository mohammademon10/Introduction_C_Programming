#include<stdio.h>
int main (void)
{
int i,N;
long long int sum = 0;

scanf("%d",&N);

for(i = 1; i <= N; i++)
{
   // sum = sum + i;same
    sum += i;

}

 printf("SUM = %lld\n",sum);

return 0;
}
//1 to n projonthow kono sonkha ber korar sutro = n*(n+1)/2