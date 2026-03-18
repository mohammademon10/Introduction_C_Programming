#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int T;
    scanf("%d",&T);
    for(int k=0;k<T;k++)
    {
        int M1,M2,D;
        scanf("%d %d %d",&M1,&M2,&D);

        int a, b, c;
        a = M1 + M2;
        b = D * M1;
        c = b / a;
        D =D - c;
        printf("%d\n", D);
    }
    return 0;
}
        
    
    

