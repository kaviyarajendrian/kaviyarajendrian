
#include <stdio.h>

void main()
{
    int n,temp,i,j,a[20];
    printf("Enter the array of numbers:");
    scanf("%d",&n);
    printf("Enter the numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
    for(j=i+1;j<=n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    for(i=0;i<=n;i++)
    {
        printf("%d",a[i]);
    }
    getch();
}
