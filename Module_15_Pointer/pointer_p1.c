#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int a=100;
    int *ptr=&a;

    printf("a er size = %d bytes\n",sizeof(a));//int value 4 bytes.

    printf("a er value = %d\n",a);//100

    printf("a er adress = %p\n",&a);//

    printf("ptr er value = %p\n",ptr);

    printf("ptr er adress = %p\n",&ptr);

  
    return 0;
}