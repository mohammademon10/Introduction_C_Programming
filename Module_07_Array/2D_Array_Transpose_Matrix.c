//2D_Array_Transpose_Matrix

#include <stdio.h>
int main()
{
    int row, column;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &column);
    int arr[row][column];

    printf("Enter %d elements of the array:\n", row * column);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrics is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Transpose matrics is:\n");
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}