#include<stdio.h>
int main(void)
{
int tk;
scanf("%d",&tk);

if(tk >= 5000)
{
    printf("cox's Bazar jabo\n");

    if(tk >= 10000)
    {
        printf("saint martin jabo\n");
    }
    else
    {
        printf("back korbo\n");
    }
}

else
{
    printf("kothao oo jabo nah\n");
}

return 0;

}