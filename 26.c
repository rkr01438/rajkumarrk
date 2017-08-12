#include <stdio.h>
int main()
{
    char    s[100];
    int countDigits,countAlphabet,countSpecialChar,countSpaces;
    int counter;
    countDigits=countAlphabet=countSpecialChar=countSpaces=0;
    printf("Enter a string: ");
    gets(s);
    for(counter=0;s[counter]!=NULL;counter++)
    {
 
        if(s[counter]>='0' && s[counter]<='9')
            countDigits++;
        else if((s[counter]>='A' && s[counter]<='Z')||(s[counter]>='a' && s[counter]<='z'))
            countAlphabet++;
        else if(s[counter]==' ')
            countSpaces++;
        else
            countSpecialChar++;
    }
    printf("\nDigits: %d \nAlphabets: %d \nSpaces: %d \nSpecial Characters: %d",countDigits,countAlphabet,countSpaces,countSpecialChar);
    return 0;
}
