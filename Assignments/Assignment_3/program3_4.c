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