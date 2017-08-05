#include <stdio.h>
#include <math.h>
int main()
{
    long long n;
    int count = 0;
 
    printf("Enter any number: ");
    scanf("%lld", &n);
    count = log10(n) + 1;
    printf("Total digits: %d", count);
    return 0;
}
