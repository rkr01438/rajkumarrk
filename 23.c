#include <stdio.h>
int hcf(int, int);
int main()
{
    int r, b, result;
    printf("Enter the two numbers to find their HCF: ");
    scanf("%d%d", &r, &b);
    result = hcf(r, b);
    printf("The HCF of %d and %d is %d.\n", r, b, result);
    return 0;
}
int hcf(int r, int b)
{
    while (r != b)
    {
        if (r > b)
        {
            r = r - b;
        }
        else
        {
            b = b - r;
        }
    }
    return r;
}
