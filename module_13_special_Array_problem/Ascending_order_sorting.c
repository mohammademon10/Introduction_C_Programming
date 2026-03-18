/*
some basic:

sorted 2 types-

ascending order:-
10 20 30 40 50 60

Descending order:-
60 50 40 30 20 10

*/

//ascending order code
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}