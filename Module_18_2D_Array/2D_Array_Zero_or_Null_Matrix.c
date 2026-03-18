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


        //test zero matrix
        int flag=1;
         for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                if(arr1[i][j] != 0)
                {
                    flag=0;
                }
            }
        }
        if(flag==1)
        {
            printf("Zero Matrix\n");
        }
        else
        {
            printf("Not Zero Matrix\n");
        }   

        return 0;

}        


//2nd way

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
    
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }

        
       //test Zero matrix
        int elements = row1*column1;
        int count=0;
         for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                if(arr1[i][j] != 0)
                {
                    count++;
                }
            }
        }
        if(elements == count)
        {
            printf("Zero Matrix\n");
        }
        else
        {
            printf("Not Zero Matrix\n");
        }   

        return 0;

}   