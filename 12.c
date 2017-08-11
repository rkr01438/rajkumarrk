#include <stdio.h>
int main()
{
    int s, num, rev = 0;
    printf("Enter any number to check palindrome: ");
    scanf("%d", &s);
    num = s;
    while(s != 0)
    {
        rev = (rev * 10) + (s % 10);
        s = s / 10;
        }
    if(rev == num)
    {
        printf("%d is palindrome.", num);
    }
    else
    {
        printf("%d is not palindrome.", num);
    }
    return 0;
}
