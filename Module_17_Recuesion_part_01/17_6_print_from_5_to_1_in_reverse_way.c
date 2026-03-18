//print from 5 to 1 in reverse way
//output :5 4 3 2 1

#include<stdio.h>
int fun(int i)
{
    if(i==6)//base case
    return 1;
    
    fun(i+1);//5 4 3 2
    printf("%d\n",i);
}

int main()
{
    fun(1);
  
    return 0;
}