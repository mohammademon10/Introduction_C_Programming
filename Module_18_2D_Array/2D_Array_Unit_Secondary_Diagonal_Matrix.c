/*
Unit matrix:
0 0 1
0 1 0
1 0 0

condition: secondary  Diagonal value = 1 & others value=0;

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

        int flag=1;

        if(row1 != column1)
        {
            flag = 0;
        }

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                if(i+j == row1-1)
                {
                  if(arr1[i][j] == 1)
                  {
                    continue;
                  }
                }
                if(arr1[i][j] != 0)
               {
                 flag=0;
               }
            }
        }

        if(flag==1)
        {
            printf("Secondary Diagonal Unit Matrix\n");
        }
        else
        {
          printf("Not unit Matrix\n");
        }

        return 0;
}