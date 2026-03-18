#include <stdio.h>

int main(void)
{
    int n ; // Number of lines for the pattern
    scanf("%d",&n);

    // Outer loop for each line
    for (int i = 1; i <= n; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Print decreasing sequence
        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }

        // Move to the next line after each iteration
        printf("\n");
    }

    return 0;
}

//another code
/*#include <stdio.h>
#include<string.h>

int main(void)
{
int N;
scanf("%d",&N);
int S = N-1;
int K=1;


for(int i=1;i<=N;i++)
{
    // Print leading spaces
    for(int j=1;j<=S;j++)
    {
        printf(" ");
    }

    // Print decreasing sequence
    for(int j=i;j>=K;j--)
    {
       printf("%d",j);
         
    }
  
   S--;
    printf("\n");
}

    return 0;
}*/