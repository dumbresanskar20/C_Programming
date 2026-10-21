// ////////////////////////////////////////////////////////////////
//
// Function Name : DisplayConvert
// Description   : Converts a lowercase letter to uppercase or vice versa.
// Input         : An alphabetic character
// Output        : The character with its case converted
// Author        : Sanskar balasaheb dumbre
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<ctype.h>

void DisplayConvert(char CValue)
{
    if((CValue >= 'a') && (CValue <= 'z'))
    {
        printf("%c", toupper(CValue));
    }
    else if((CValue >= 'A') && (CValue <= 'Z'))
    {
        printf("%c", tolower(CValue));
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}