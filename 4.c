#include <stdio.h>
int main()
{
    char r;
    printf("Enter a character: ");
    scanf("%c",&r);
    if( (r>='a' && r<='z') || (r>='A' && r<='Z'))
        printf("%c is an alphabet.",r);
    else
        printf("%c is not an alphabet.",r);
    return 0;
}
