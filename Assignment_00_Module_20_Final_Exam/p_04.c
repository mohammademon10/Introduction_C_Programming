

#include <stdio.h>

int main(void)
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

        // Print last row
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                if(i==row1-1)
                {
                  printf("%d ",arr1[i][j]);
                }   
            }
            
        }
    printf("\n");

        // Print last column
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                if(j==column1-1)
                {
                  printf("%d ",arr1[i][j]);
                }   
            }
           
        }
    printf("\n");

        return 0;
}

//2nd way
#include <stdio.h>

int main()
 {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Print last row
    for (int j = 0; j < m; j++)
    {
        printf("%d ", arr[n-1][j]);
    }
    printf("\n");

    // Print last column
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i][m-1]);
    }
    printf("\n");

    return 0;
}
