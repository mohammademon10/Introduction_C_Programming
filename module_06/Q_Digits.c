//do while use kora lagbe
/*input
4
121
39
123456
1200
output
1 2 1
9 3
6 5 4 3 2 1
0 0 2 1
*/
#include <stdio.h>
int main(void)
{
    int i,size;
    //input
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);   
    }
    //kaj
    for(i=0;i<size;i++)
    { 
    do
    {
    printf("%d ",a[i]%10);
    a[i] = a[i]/10;
    }
    while(a[i]!=0);
    printf("\n");
    }

    return 0;
}