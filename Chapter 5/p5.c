#include <stdio.h>
int main()
{
   int n,i,sum=0;

   printf("Enter the last element ");
   scanf("%d",&n);

   for (i=1;i<=n;i++)
   {
       sum=sum+i;

   }

   printf("Summation is %d\n",sum);

   return 0;








}
