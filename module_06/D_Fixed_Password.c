//EOF
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int n;
   while(scanf("%d",&n) !=EOF)//END OF FILE
  
    {
       if(n==1999)
       {
        printf("Correct\n");
        break;//1999 paie gela ar print kora lagbe nah
       }
       else
       {
        printf("Wrong\n");//correct nah paow projnthow print korte thakbe
       }

    }
   
    return 0;
}