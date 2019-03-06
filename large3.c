#include <stdio.h>

int main()
{
   int num1,num2,num3;
    printf("Enter the values:");
    scanf("%d%d%d",&num1,&num2,&num3);
    printf("num1=%d\t,num2=%d\t,num3=%d\n",num1,num2,num3);
    if(num1>num2)
    {
        printf("The num1 is largest\n");
    }
else if(num2>num3)
{
    printf("The num2 i largest\n");
}
    else
    {
    printf("The num3 is largest\n");
    }
return 0;
}
