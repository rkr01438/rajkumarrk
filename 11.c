#include <stdio.h>
int main()
{
    int r, s;
    long long t = 1;
    printf("Enter a base number: ");
    scanf("%d", &r);
    printf("Enter an exponent: ");
    scanf("%d", &r);
    while (s != 0)
    {
        result *= r;
        --s;
    }
    printf("Answer = %lld", t);
    return 0;
}
