#include <stdio.h>
void sum(int x,int y)
{
  

    int sum=x+y;
    printf("%d\n",sum);
}

int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}
