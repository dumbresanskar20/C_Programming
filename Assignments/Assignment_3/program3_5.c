#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

int ChkVowel (char cChar)
{
    if ((cChar == 'a') || (cChar == 'e') || (cChar == 'i') || (cChar == 'o') || (cChar == 'u'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character: \n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not vowel");
    }
}