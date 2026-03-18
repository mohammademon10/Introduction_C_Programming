#include<stdio.h>
int main (void)
{
int i;
int sum = 0;

for(i = 1; i <= 5; i++)
{
    sum = sum + i;
    //sum += i;same

}
 printf("%d\n",sum);

return 0;
}