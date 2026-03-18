#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Read the array A
    int A[N];
    for (int i = 0; i < N; i++)
     {
        scanf("%d", &A[i]);
     }
     
    // Read X and V
    int X,V;
    scanf("%d %d", &X, &V);// Read X and V

    // Update the value at X'th index
    A[X] = V;

    // Print the array in reverse order
    for (int i = N - 1; i >= 0; i--) 
    {
        printf("%d ", A[i]);
    }

    return 0;
}
