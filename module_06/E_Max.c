//problem
#include <stdio.h>
int main(void)
{
    int size;
    scanf("%d",&size);
    int a[size],max=0;
    for(int i=0;i<size;i++)
    {
     scanf("%d",&a[i]);
     if(a[i]>max)
    {
     max=a[i];
    }
    }
    printf("%d\n",max);

    return 0;
}