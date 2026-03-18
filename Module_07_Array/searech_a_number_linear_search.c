#include <stdio.h>

int main(void)
{
    int num[]= {10,2,15,20,35,46,85};
    int value,i,position = -1;
    printf("Enter the value you want to search: ");
    scanf("%d",&value);
    for(int i=0;i<7;i++)
    {
        if(value == num[i])
        {
            position = i+1;
            break;
        }
    }
    if(position == -1)
    {
        printf("Not Found Value\n");
    }
    else
    {
        printf("the position of %d is : %d\n",value,position);
    }
 
    return 0;
}
/*
#include <stdio.h>

int main(void)
{
    int num[7]= {10,2,15,20,35,46,85};
    int value,i=0;
    printf("Enter the value you want to search: ");
    scanf("%d",&value);
   while(i<7)
    {
        if(value == num[i])
        {
           printf("the position of %d is : %d\n",value,i+1);
            break;
        }
        i++;
    }
    
    if(i>=7)
    {
        printf("Not Found Value\n");
        
    }
   
 
    return 0;
}

*/