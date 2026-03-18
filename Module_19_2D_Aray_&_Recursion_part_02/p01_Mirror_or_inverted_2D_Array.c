//Mirrior_Array_Matrix

#include <stdio.h>
int main()
{

    //declaration & initialization 1st matrix
    
    int row1,column1;

    
    scanf("%d %d", &row1,&column1);
    
    int arr1[row1][column1];

      //input  matrix
    
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }
       
        //print inverted array

        for (int i = 0; i<row1; i++)
        {
            for (int j=column1-1; j>=0 ;j--)
            {
                printf("%d ",arr1[i][j]);
            }
            printf("\n");
        }
    
    return 0;
}