//2D_Array_secondary_Diagonal_Matrix

/*
0 0 1
0 2 0
3 0 0
*/

#include <stdio.h>

int main(void)
{
    //declaration & initialization 1st matrix
    int row1,column1;

    printf("Enter row of first matrics: ");
    scanf("%d", &row1);
    printf("Enter columns of first matrics: ");
    scanf("%d", &column1);
    int arr1[row1][column1];

      //input  matrix
    
        printf("Enter %d elements of first matrics: \n", row1 * column1);
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }
       
        //test matrix diagonal or not

        int flag=1;//flag value not change it's means diagonal matrix..so we 1st let this.

        if(row1 != column1)//beacuse of diagonal matrix row and column same
        {
           flag=0;
        }

         for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                if(i+j== row1-1)
                {
                    continue;
                }
                if( arr1[i][j] != 0)
                {
                    flag=0;
                }
            }
            
        }
        if(flag==1)
        {
             printf("secondary Diagonal\n");
        }
        else
        {
            printf("Not Diagonal\n");
        }

    return 0;
}