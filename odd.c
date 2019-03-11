#include <stdio.h>

int main()
{
    int num,m=1,n=6;
    printf("Print odd numbers in a given range m to n:\n");
    for(num=m;num<=n;num++)
    {
        if(num%2==1)
        printf("%d",num);
        
    }

    return 0;
}
