#include <stdio.h>
int main()
{
    int n1, r, minMultiple;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &r);
    minMultiple = (n1>r) ? n1 : r;
    while(1)
    {
        if( minMultiple%n1==0 && minMultiple%r==0 )
        {
            printf("The LCM of %d and %d is %d.", n1, r,minMultiple);
            break;
        }
        ++minMultiple;
    }
    return 0;
}
