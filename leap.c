#include <stdio.h>

int main()
{
   int Year;
   printf("Enter the year:\n");
   scanf("%d",&Year);
   if(Year%4==0)
   printf("Its a Leap Year");
   else
   printf("Its not a Leap Year");
   return 0;
}
