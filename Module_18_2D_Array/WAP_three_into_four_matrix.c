//WAP (3*4) matrix
#include <stdio.h>

int main(void)
{
    int a[3][4]={{5,6,7,8},{9,6,4,2},{7,5,2,6}};

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}