#include<stdio.h>
#include<conio.h>
void main()
{
   int fact,i,s;
   fact = 1;
   printf("Enter the number\t");
   scanf("%d" , &s);
   for(i = 1; i <= s; i++)
   {
       fact = fact*i;		
   }
   printf("Factorial of %d is %d", s , fact);
   getch();
}
