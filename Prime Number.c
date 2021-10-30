/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int a,i,b=0;
    printf("Enter a number ",a);
    scanf("%d",&a);
   for(i=1;i<=a;i++)
   {
       if(a%i==0)
       {
           b++;
       }
   }
        if(b==2)
        {
              printf("%d is a prime number",a);
        }
       else 
       {
           printf("%d is not a prime number",a);
       }
   

    return 0;
}
