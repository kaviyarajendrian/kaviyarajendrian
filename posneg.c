#include <stdio.h>

int main()
{
    int A;
    printf("enter the number A:");
    scanf("%d",&A);
    if(A>0)
    printf("A is a positive number");
    else if(A<0)
    printf("A is negative number");
    else if (A==0)
    printf("A is Zero");
    return 0;
}
