// ////////////////////////////////////////////////////////////////
//
// Function Name : CheckCharacterType
// Description   : Displays the type of the Character.
// Input         : An char Alphabet.
// Output        : Display CharacterType.
// Author        : Sanskar balasaheb dumbre
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


void CheckCharacterType(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("%c is UPPERCASE Alphabet.", cValue);
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("%c is lowercase Alphabet.", cValue);
    }
    else if((cValue >= '0') && (cValue <= '9'))
    {
        printf("%c is Digit.", cValue);
    }
    else
    {
        printf("%c is Special Characters.", cValue);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character :");
    scanf("%c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;  
}