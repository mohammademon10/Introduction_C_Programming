#include <stdio.h>

int main(void)
{
    //declaration & initialization 1st matrix
    int row1,column1;

   scanf("%d %d", &row1,&column1);

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

        if(row1 != column1)//beacuse of diagonal matrix row and column same
        {
           flag=0;
        }

         for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                if(i==j || i+j== row1-1)
                {
                    if( arr1[i][j] != 1)
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
             printf("YES\n");
        }
        else if (flag==0)
        {
            printf("NO\n");
        }

    return 0;
}