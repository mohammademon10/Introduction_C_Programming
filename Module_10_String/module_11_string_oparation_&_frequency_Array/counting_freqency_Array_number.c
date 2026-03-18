//normal solve....01
#include <stdio.h>
#include <string.h>
int main(void)
{
   
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0; i<n;i++)
   {
   scanf("%d",&a[i]);
    }
 int zero=0, one=0,two=0;
 for(int i=0; i<n;i++)
 {
     if(a[i] == 0)
     {
         zero++;
     }
      if(a[i] == 1)
     {
         one++;
     }
      if(a[i] == 2)
     {
         two++;
     }
 }
 printf("%d\n",zero);
 printf("%d\n",one);
 printf("%d\n",two);

    return 0;
}
//02.c
//bar bar intialization kora lagtece--- int zero=0, one=0,two=0;....so,
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
   
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0; i<n;i++)
   {
   scanf("%d",&a[i]);
    }
 int cnt[3]={0};//int zero=0, one=0,two=0;
 for(int i=0; i<n;i++)
 {
     if(a[i] == 0)
     {
       cont[0]++ // zero++;
     }
      if(a[i] == 1)
     {
       cont[1]++  //one++;
     }
      if(a[i] == 2)
     {
       cont[2]++ // two++;
     }
 }
 printf("%d\n",zero);
 printf("%d\n",one);
 printf("%d\n",two);

    return 0;
}
//03.c
*/
//but now problem bar bar if use kora lagtece,so
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
   
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0; i<n;i++)
   {
   scanf("%d",&a[i]);
    }
 int cnt[3]={0};//int zero=0, one=0,two=0;
 for(int i=0; i<n;i++)
 {
   int val = a[i];
   cnt[val]++;
 }
 printf("%d\n",zero);
 printf("%d\n",one);
 printf("%d\n",two);

    return 0;
}
//04.c
*/
//noe onnek bar print nah kore ekbar korre dibo
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
   
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0; i<n;i++)
   {
   scanf("%d",&a[i]);
    }
 int cnt[3]={0};//int zero=0, one=0,two=0;
 for(int i=0; i<n;i++)
 {
   int val = a[i];
   cnt[val]++;
 }
for(int i=0; i<3;i++)
{
    printf("%d - %d\n",i,a[i]);
}


    return 0;
}

*/