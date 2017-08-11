#include <stdio.h>
void main()
{

    int num,r =20,s=40;
    clrscr();
    printf("Print Odd Numbers in a given range r to s:\n");
    for (num = r; num <= s; num++)
        {
               if (num % 2 == 1)

                  printf ("%d ", num);
         }
                getch();
}
