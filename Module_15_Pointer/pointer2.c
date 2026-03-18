#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int a=100;
    int *ptr=&a;
     a=200;//*ptr=200 same kotha
    printf("a er value = %d\n",a);//200


    printf("a er value = %d\n",*ptr);//200

   

  
    return 0;
}