/*
input
5
5 2 2 3 7
9
output
yes

*/

//flag variable

#include <stdio.h>
int main(void)
{//input
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);

//work
    int flag=0;
    for(int i=0;i<n-1;i++)
    {
     for(int j=i+1;j<n;j++)
     {
        if(a[i]+a[j]==x)
        {
           flag=1;
        } 
     }
   
    }

    if(flag==1)
     {
        printf("yes\n");
     }
     else//flag==0;
     {
       printf("no\n");
     }
   

    return 0;
}
