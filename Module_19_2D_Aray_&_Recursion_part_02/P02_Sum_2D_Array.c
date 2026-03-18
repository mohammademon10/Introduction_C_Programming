//2D_Array_matrix_sum

#include <stdio.h>
int main(void)
{

//declaration & initialization 1st matrix
int row,col;
scanf("%d %d",&row,&col);
int A[row][col],B[row][col],C[row][col];


    //input 1st matrix
   
        
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                scanf("%d",&A[i][j]);
            }
        }
       

   

//input 2nd matrix
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                scanf("%d", &B[i][j]);
            }
        }
       

        //work
      
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
            }
        }

        //print
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
   




        
    return 0;
}