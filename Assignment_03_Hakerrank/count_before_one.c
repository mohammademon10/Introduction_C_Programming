#include <stdio.h>
int count_before_one(int A[], int N)
{
   int count=0;
  for(int i=0;i<N;i++)
  {
     if(A[i]!=1)
     {
       count++;
     } 
     else if(A[i]==1)
     {
        break; // Stop counting once we encounter 1;
     }
  }
   return count;
}

int main()
{
  int N;
  scanf("%d",&N);
  int A[N];
  for(int i=0;i<N;i++)
  {
    scanf("%d",&A[i]);
  }
// Call the function to count elements before 1
 int count = count_before_one(A, N);
 
 printf("%d",count);

 return 0;

}