//pow()_function
/*
input:
a=2 b=3
utput:
8
*/

#include <stdio.h>
#include<math.h>

int main(void)
{
    int a,b;

    printf("enter the base and power: ");
    scanf("%d %d",&a,&b);//a=base,b=power

    int ans = pow(a,b);

    printf("%d",ans);
    
    return 0;
}