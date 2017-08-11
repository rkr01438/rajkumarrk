#include <stdio.h>
int main()
{
    int i, n, isPrime;
    isPrime = 1;
    printf("Enter any number to check prime: ");
    scanf("%d", &n);
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            isPrime = 0;
            break;
        }
    }
    if(isPrime ==1)
    {
        printf("%d is prime number", n);
    }
    else
    {
        printf("%d is composite number", n);
    }
    return 0;
}
