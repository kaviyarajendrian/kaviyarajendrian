#include <stdio.h>

int main()
{
    int i,num,sum=0;
    printf("Enter the positive integer:\n");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("sum of first %d natural numbers=%d\n",num,sum);
    return 0;
}
