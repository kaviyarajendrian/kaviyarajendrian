#include <stdio.h>

int main()
{
    int a,b,i,j,flag;
    printf("Enter lower bound of interval:");
    scanf("%d",&a);
    printf("\n Eneter higher bound of interval:");
    scanf("%d",&b);
    printf("\nprime numbers between %d and %d are:",a,b);
    for(i=a;i<=b;i++)
    {
        if(i==1)
        continue;
        flag=1;
        for(j=2;j<=i/2;++j)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        printf("%d",i);
    }

    return 0;
}
