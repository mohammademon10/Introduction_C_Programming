//Data Types
#include<stdio.h>
int main(void)
{

int a,b,sum,mult,subs;
float dvd;
scanf("%d%d",&a,&b);

sum = a + b;
printf("%d + %d = %d\n",a,b,sum);

subs = a - b;
printf("%d - %d = %d\n",a,b,subs);


mult = a * b;
printf("%d * %d = %d\n",a,b,mult);

dvd = a * 1.0 / b;
printf("%d / %d = %0.2f\n",a,b,dvd);


return 0;

}