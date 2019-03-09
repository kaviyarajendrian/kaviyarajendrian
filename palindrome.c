#include <stdio.h>

int main()
{
    int n,reversedInteger=0,remainder,originalInteger;
    printf("Eneter an Integer:");
    scanf("%d",&n);
    originalInteger=n;
    while(n!=0)
    {
        remainder=n%10;
        reversedInteger=reversedInteger*10+remainder;
        n/10;
    }
    if(originalInteger==reversedInteger)
    printf("5d is a palindrome",originalInteger);
    else
    printf("%d is not palindrome",originalInteger);
    return 0;
}
