//ceil()_function
/*
input:
3.4
utput:
4
*/

#include <stdio.h>
#include<math.h>

int main(void)
{
    double a;
    scanf("%lf",&a);

    int ans = ceil(a);

    printf("%d",ans);
    
    return 0;
}