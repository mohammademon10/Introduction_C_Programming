//round()_function
/*
input:
3.4
utput:
3

input 3.5 up then output 4
*/

#include <stdio.h>
#include<math.h>

int main(void)
{
    double a;
    scanf("%lf",&a);

    int ans = round(a);

    printf("%d",ans);
    
    return 0;
}