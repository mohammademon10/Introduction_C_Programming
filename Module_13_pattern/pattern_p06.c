/*
input:

n=5

output:

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/



#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int k=n;
    for(int i=1;i<=n;i++)//row
    {
        for(int j=1;j<=k;j++)//coulmn
        {
            printf("%d ",j);
        }
        k--
        ;
        printf("\n");
    }
    
    return 0;
}