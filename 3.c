#include <stdio.h>
int main()
{
    char rs;
    printf("Enter any character: ");
    scanf("%c", &rs);
    switch(rs)
    {
        case 'a': 
        case 'e': 
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': 
            printf("VOWEL");
            break;
 
        default: printf("CONSONANT");
    }
 
    return 0;
} 
