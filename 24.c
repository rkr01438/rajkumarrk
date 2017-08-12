#include <stdio.h>
int main()
{
   int r, reverse = 0;
   printf("Enter a number to reverse\n");
   scanf("%d", &r);
   while (r != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + r%10;
      r       = r/10;
   }
   printf("Reverse of entered number is = %d\n", reverse);
   return 0;
}
