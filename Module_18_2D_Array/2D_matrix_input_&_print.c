//2D_matrix_input_&_print
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
       
        //print
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                printf("%d ", arr1[i][j]);
            }
            printf("\n");
        }
    
    return 0;
}