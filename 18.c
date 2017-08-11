#include <stdio.h>
#include <math.h>
int main()
{
    int low, high, i, temp1, temp2, remainder, r = 0, result = 0;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);
    printf("Armstrong numbers between %d an %d are: ", low, high);
    for(i = low + 1; i < high; ++i)
    {
        temp2 = i;
        temp1 = i;
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++r;
        }
        while (temp2 != 0)
        {
            remainder = temp2 % 10;
            result += pow(remainder, r);
            temp2 /= 10;
        }
        if (result == i) {
            printf("%d ", i);
        }
        r = 0;
        result = 0;
    }
    return 0;
}
