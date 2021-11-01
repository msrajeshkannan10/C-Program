/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int a=0,b=1,n,c=2,temp;
   scanf("%d",&n);
   printf("%d %d ",a,b);
   while(c<=n)
   {
       temp=a+b;
       a=b;
       b=temp;
       printf("%d ",temp);
       c++;
   }
    return 0;
}
