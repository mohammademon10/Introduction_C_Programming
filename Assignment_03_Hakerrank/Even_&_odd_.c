#include <stdio.h>

void odd_even() 
{
    // Input size of the array
    int N;
    scanf("%d", &N);

    // Input the array
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    // Initialize counters for even and odd numbers
    int even_count = 0;
    int odd_count = 0;

    // Iterate through the array
    for (int i = 0; i < N; i++)
     {
        if (A[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    // Print the counts
    printf("%d %d\n", even_count, odd_count);
}

int main()
{
    // Call the function
    odd_even();

    return 0;
}
