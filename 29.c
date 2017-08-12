#include <stdio.h>
int main()
{
    int n, i, s = 0;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    i = 1;
    while ( i <=n )
    {
        s += i;
        ++i;
    }
    printf("S = %d",s);
    return 0;
}
