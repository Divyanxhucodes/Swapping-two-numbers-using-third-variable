#include<stdio.h>

int main()
{
   int a,b,c;
   printf ("enter the number A : \n");
   scanf  ("%d",&a);
   printf("enter the number B : \n");
   scanf ("%d",&b);
   c=a; 
   a=b;
   b=c;
   printf("the new value of A is :%d \n",a);
   printf("the new value of B is :%d",b);
   return 0;
     }

   
