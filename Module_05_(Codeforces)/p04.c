#include<stdio.h>
int main(void)
{
    int X;
    scanf("%d",&X);

    int digit = X/1000;//kono number ke 1000 diea bag korle 1st digit paow jaie 

    if(digit%2 == 0)
    {
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }


    return 0;
}