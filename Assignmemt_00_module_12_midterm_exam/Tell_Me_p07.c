#include<stdio.h>
int main()
{
    int test;//2
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        int num1,count=0;
        scanf("%d",&num1);//5
        int arr[num1];
        for(int j=0;j<num1;j++)
        {
            scanf("%d",&arr[j]);//1 2 3 4 5 6
        }
        int X;
        scanf("%d",&X);//3
        for(int j=0;j<num1;j++)
        {
            if(arr[j]==X)
            {
                count++;
            }
        }
        if(count>=1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}