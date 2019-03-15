#include <stdio.h>

int main()
{
    int array[10],s,i,l;
    printf("\n Enter the size of the array:");
    scanf("%d",&s);
    printf("\n Enter %d elements of the array:",s);
    for(i=0;i<s;i++)
    scanf("%d",&array[i]);
    l=array[0];
    for(i=0;i<s;i++)
    {
        if(l<array[i])
        l=array[i];
    }
    printf("\n largest element present in the given array is:%d",l);
    return 0;
}
