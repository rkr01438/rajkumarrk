#include <stdio.h>
int main()
{
    int low, high, r, f;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);
    printf("Prime numbers between %d and %d are: ", low, high);
    while (low < high)
    {
        f = 0;

        for(r = 2; r <= low/2; ++r)
        {
            if(low % r == 0)
            {
                f = 1;
                break;
            }
        }

        if (f == 0)
            printf("%d ", low);
        ++low;
    }
    return 0;
}
