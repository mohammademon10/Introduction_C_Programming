#include <stdio.h>
int main()
{
    //input
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

    //print matrix
    printf("The matrics is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    //diagonal elements & sum of diagonal
    printf("Diagonal elements : ");
     int sum=0;
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
          if(i==j)
          {
            printf("%d ",arr[i][j]);
            sum = sum +arr[i][j];
          }
         
         
        }
       
    }
    printf("\n");
    printf("sum of diagonal element = %d\n",sum);
        

    return 0;
}