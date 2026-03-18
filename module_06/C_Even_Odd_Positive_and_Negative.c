/*C. Even, Odd, Positive and Negative(codeforces)

input:

5
-5 0 -3 -4 12
output:

Even: 3
Odd: 2
Positive: 1
Negative: 3
*/

#include <stdio.h>
int main(void)
{
    int N;
    scanf("%d",&N);
    int a;
    int even=0,odd=0,pos=0,neg=0;
    for(int i=1;i<=N;i++)
    {
        scanf("%d",&a);
        //kaj 

        if(a%2==0)
        {
           //total even number
           even++; 
        }
        else if(a%2 != 0)
        {
           //total odd number
            odd++;
        }
        //else if hobe nah kaeon upor aa jog kore pelcce ekbar so if diea check korte hobe
        if(a>0)
        {
            //total positive number
            pos++;
        }
        else if(a<0)
        {
            //total negative number
            neg++;
        }
       
    }
 printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even,odd,pos,neg);

    return 0;
}
/*

#include <stdio.h>
int main(void)
{
    int N;
    scanf("%d",&N);
    int a;
    int even=0,odd=0,pos=0,neg=0;
    for(int i=1;i<=N;i++)
    {
        scanf("%d",&a);
        //kaj 

        if(a%2==0)
        {
           //total even number
           even++; 
        }
        if(a%2 != 0)
        {
           //total odd number
            odd++;
        }
        //else if hobe nah kaeon upor aa jog kore pelcce ekbar so if diea check korte hobe
        if(a>0)
        {
            //total positive number
            pos++;
        }
        if(a<0)
        {
            //total negative number
            neg++;
        }
       
    }
 printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even,odd,pos,neg);

    return 0;
}

*/