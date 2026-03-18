//descending sorting
/*

input:
5
10 20 30 50 40

output:
50 40 30 20 10

*/

#include <stdio.h>
int main(void)
{
    //input
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    //work
    for(int i=0;i<n-1;i++)
    {
     for(int j=i+1;j<n;j++)
     {
        if(a[i]<a[j])
        {
            //swap kore dibo
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
           
        } 
     }
   
    }
    //output
    for(int i=0;i<n;i++)
    {
      printf("%d ",a[i]);
    }

return 0;
}