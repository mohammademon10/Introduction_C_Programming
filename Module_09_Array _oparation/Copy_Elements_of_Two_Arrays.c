#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    //Array-01
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //Array-02
     int m;
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]); 
    }
    //Array-03(array+array02)
    int ans[n+m];
    for(int i=0;i<n;i++)
    {
      ans[i]=a[i];
    }
    //2 no array 3 no er modhe dukaie di
    int i=n;
    for(int j=0;j<m;j++)
    {
        ans[i]=b[j];
        i++;
    }
     //print
    for(int i=0;i<n+m;i++)
    {
      printf("%d ",ans[i]);  
    }


    return 0;
}