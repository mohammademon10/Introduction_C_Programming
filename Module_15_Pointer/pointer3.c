#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    double a=5.262;
    double *ptr=&a;

    printf("a er size = %d bytes\n",sizeof(a));//double value 8 bytes.

    printf("ptr er size = %d bytes\n",sizeof(ptr));//4 bytes


    printf("a er value = %0.3lf\n",a);//5.262

    printf("a er value = %0.3lf\n",*ptr);//5.262

   

  
    return 0;
}