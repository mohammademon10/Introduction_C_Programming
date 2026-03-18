#include<stdio.h>
int main(void)
{

int number;
scanf("%d",&number);

if(number % 2 == 0)
{
    printf("even");
}
else if(number % 2 != 0)
{
printf("odd");
}

return 0;

}
