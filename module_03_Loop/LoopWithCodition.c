#include<stdio.h>
int main(void)
{
int i;
for(i = 1; i <=20; i++)
{
if(i%2 == 0)
{printf("%d - even\n",i);}
else
//else if(i%2 != 0)
{
printf("%d - odd\n",i);
}


}

return 0;


}