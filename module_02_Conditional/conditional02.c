#include<stdio.h>
int main(void)
{
int tk;
scanf("%d",&tk);

if(tk >= 100)
{
    printf("burger khabo");
}
else if(tk >= 50)//100 tk er upor holla ar nichhe condition check korbe nah taie ekta condition dekha le hobe.
{
    printf("fuchka khabo");
}
else if (tk >= 20)
{
    printf("ice cream khabo");
}
else
{
    printf("kichu khabo nah");
}

return 0;

}