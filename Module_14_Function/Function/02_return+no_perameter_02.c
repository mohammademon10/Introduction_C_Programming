#include <stdio.h>
int sum()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    return sum;
}

int main()
{
   // int a=sum();
   // printf("%d",a);

   //or
   
    printf("%d",sum());

    return 0;
}
