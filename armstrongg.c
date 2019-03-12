#include <stdio.h>

void main()
{
    int a,b,num,temp=0,c,i;
    printf("Enter a number:");
    scanf("%d%d",&b,&a);
    for(i=a;i<b;i++)
    {
        c=a;
        while(a>0)
        {
            num=a%10;
            temp=temp+(num*num*num);
            a=a/10;
        }
        if(temp==c)
        {
            printf("Its armstrong number");
        }
        else
        {
            printf("Its not armstrong number");
        }
    }
    getch();
}
