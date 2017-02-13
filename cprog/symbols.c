/*Any character is entered through the keyboard,write a program to determine whether the character
entered is capital,symbol,small or numerical*/

#include <stdio.h>
int main(void)
{
    char i ;
    printf("\nEnter a character ,I'll tell from which character it belongs : ");
    scanf("%c",&i);
    if(i >= 65 && i <= 90)
        printf("\nCharacter you entered is %c - from A-Z ",i);
    if(i >= 97 && i <= 122)
        printf("\nCharacter you entered is %c - from a-z",i);
    if(i >= 48 && i <= 57)
        printf("\nCharacter you entered is %c - from 0-9",i);
    else if ((i >= 0 && i <= 47) || (i >= 58 && i <= 64) || (i >= 91 && i <= 96) || (i >= 123 && i <= 127) )
        printf("\nCharacter you entered is %c - from symbols",i);
    
    return 0;
                
}
