//floor() Function

/*
input:
3.4
utput:
3
*/

#include <stdio.h>
#include<math.h>

int main(void)
{
    double a;
    scanf("%lf",&a);

    int ans = floor(a);

    printf("%d",ans);
    
    return 0;
}