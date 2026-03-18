//sum_of_two_value_equal_x
//a[i]+a[j]=x;


#include <stdio.h>

int main(void)
{
    //input
    int n;
    scanf("%d",&n);//array size
    int a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int x;
    scanf("%d",&x);//two value sum

    //work
    int value=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(a[i]+a[j]==x)
           {
            value++;
           }
        }
    }
    if(value==0)
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }
   

    return 0;
}

//using flag variable
#include <stdio.h>

int main(void)
{
    //input
    int n;
    scanf("%d",&n);//array size
    int a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int x;
    scanf("%d",&x);//two value sum

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
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
   

    return 0;
}