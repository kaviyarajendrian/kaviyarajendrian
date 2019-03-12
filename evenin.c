#include <stdio.h>

int main()
{
    int i,m,n;
    printf("enter the value:");
    scanf("%d",&m);
    printf("enter the value:");
    scanf("%d",&n);
    for(i=m;i<=n;i++)
    {
        if(i%2==0)
        printf("%d",i);
    }
     return 0;
}
