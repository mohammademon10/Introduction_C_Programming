#include <stdio.h>
#include <string.h>

int main() 
{
    int t;  //  test cases
    scanf("%d",&t);

    for (int i=0;i<t;i++) 
    {
        int n;  // Number of rounds
        scanf("%d",&n);

        char a[n];  
        scanf("%s",a);

        int tigerWins = 0;  
        int pathanWins = 0; 

        // Count the number of rounds won by Tiger and Pathan
        for (int j=0;j<n;j++)
         {
            if (s[j] == 'T')
            {
                tigerWins++;
            } 
            else if (s[j] == 'P') 
            {
                pathanWins++;
            }
        }

        // Print the winner
        if (tigerWins > pathanWins) 
        {
            printf("Tiger\n");
        } 
        else if (tigerWins < pathanWins)
        {
            printf("Pathaan\n");
        }
        else 
        {
            printf("Draw\n");
        }
    }

    return 0;
}