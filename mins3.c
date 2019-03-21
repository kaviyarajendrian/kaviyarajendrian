#include <stdio.h>

int main()
{
    int array[50],min,s,c,location=1;
    printf("Enter the no.of elements in the array:\n");
    scanf("%d",&s);
    printf("Enter the %d integers:\n",s);
    for(c=0;c<s;c++)
    scanf("%d",&array[c]);
    min=array[0];
    for(c=1;c<s;c++)
    {
        if(array[c]<min)
        {
            min=array[c];
            location=c+1;
        }
    }
    printf("Minimum element presentat a location %d and its value is %d.\n",location,min);
    return 0;
}
