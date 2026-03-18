//sqrt()_function
/*
input:
25
utput:
5
*/

#include <stdio.h>
#include<math.h>

int main(void)
{
    double a;
    scanf("%lf",&a);

    double ans = sqrt(a);

    printf("%0.2lf",ans);
    
    return 0;
}