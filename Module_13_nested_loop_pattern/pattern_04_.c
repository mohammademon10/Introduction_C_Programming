#include <stdio.h>
int main(void)
{
    int n,s,k;
    scanf("%d",&n);
   
    s=n-1;//1st line kotto ta speach
    k=1;//1st line ee kotto ta star
    

    for(int i=1;i<=(2*n)-1;i++)//koto ta line hobbe....

    {
       //1st kaj
       for(int j=1;j<=s;j++)
       {
        printf(" ");
       } 
       for(int j=1;j<=k;j++)
       {
        printf("*");
       }

       //1 line after 

       if(i<=n-1)
       {
        s--;
        k+=2;
       }
       else
       {
        s++;
        k-=2;

       }
       printf("\n");


    }

    return 0;
}