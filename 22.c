#include <stdio.h>
int gcd(int a, int y)
{
    if (a == 0 || y == 0)
       return 0;
    if (a == y)
        return a;
    if (a > y)
        return gcd(a-y, y);
    return gcd(a, y-a);
}
int main()
{
    int a = 98, y = 56;
    printf("GCD of %d and %d is %d ", a, y, gcd(a, y));
    return 0;
}
