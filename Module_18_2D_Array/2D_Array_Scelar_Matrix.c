/*
scelar matrix:

10 0 0
0 10 0
0 0 10

condition:daigonal value same & others value 0

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

        //test matrix Scelar or not

        int flag=1;//flag value not change it's means Scelar matrix..so we 1st let this.

        if(row1 != column1)//beacuse of Scelar matrix row and column same
        {
           flag=0;
        }

         for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                if(i==j)
                {
                   if(arr1[0][0] != arr1[i][j])
                   {
                     flag=0;
                   }
                }
                else if( arr1[i][j] != 0)
                {
                    flag=0;
                }
            }
            
        }
        if(flag==1)
        {
             printf("Scelar Matrix\n");
        }
        else
        {
            printf("Not Scelar matrix\n");
        }

   return 0;

}