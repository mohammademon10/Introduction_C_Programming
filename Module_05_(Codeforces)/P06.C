#include<stdio.h>
int main(void)
{
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);

//minimum
if(A<=B && A<=C )
{
    printf("%d ",A);// q bola dicce 1 ta speach ditte not new line
}

else if(B<=C && B<=A)
{
     printf("%d ",B);
}
else
{
    printf("%d ",C);
}

//maximum
if(A>=B && A>=C )
{
    printf("%d\n",A);
}

else if(B>=C && B>=A)
{
     printf("%d\n",B);
}
else
{
    printf("%d\n",C);
}

    return 0;
}