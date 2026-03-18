//17_3_print_1_to_5_using_Recursion

#include<stdio.h>
int fun(int i)
{
    if(i==6)//base case
    return 1;
    
    printf("%d\n",i);
    fun(i+1);
    
}

int main()
{
    fun(1);
  
    return 0;
}