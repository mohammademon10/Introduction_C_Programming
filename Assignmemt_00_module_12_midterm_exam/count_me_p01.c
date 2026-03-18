//problem

#include <stdio.h>
int main()
{
    int N;

    scanf("%d", &N);

    int A[N];

    for(int i=0; i < N; i++)
    {
    scanf("%d", &A[i]);
    }

    int countDivBy2=0;
    int countDivBy3=0;

    for( int i=0; i<N; i++)
    {
        if(A[i] % 2 == 0)
        { 
        if (A[i] % 2 == 0 || A[i] % 3 == 0) 
        countDivBy2++;
        }

        else if(A[i] % 3 == 0)
        {
            countDivBy3++;
        }

    }
    printf("%d ", countDivBy2);
    printf("%d", countDivBy3);


    return 0;
}