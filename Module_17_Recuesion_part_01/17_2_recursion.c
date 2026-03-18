#include<stdio.h>
int fun()
{
    printf("Fun\n");
    fun();
}

int main()
{
    fun();
    return 0;
}